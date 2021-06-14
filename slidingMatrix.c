#include <stdio.h>
#include <stdbool.h>

#define ROW 3 
#define COLUMN 9
#define WINDOW 3



int main() {
    
    int i,j,k=0,failed=0;
	
	int array[ROW][COLUMN] = {{ 1,8,3,9,2,1,6,5,7},
                         {9,6,7,3,4,5,8,2,1},
                         {2,5,1,8,7,6,4,9,3}};
                         
    bool setMap[9]={false,false,false,false,false,false,false,false,false};
	
	bool resultList[COLUMN-2]={false,false,false,false,false,false,false};
	
	for(k=0;k<COLUMN-2;k++)
	{
	    for(i=0;i<9;i++)
	        setMap[i] = false;
    	for(i=0;i<ROW;i++)
    	{
    	    
    	    for(j=k;j<WINDOW+k;j++)
    	    {
    	        printf("[%d %d %d %d %d]\n",i,j,k,array[i][j], setMap[((array[i][j])-1)]);
    	        if((setMap[(array[i][j]-1)])==false)
    	            setMap[(array[i][j]-1)] = true;
    	        else
    	        {
    	            resultList[k] = true;
    	            failed = 1;
    	        }
    	    }
    	    if(failed)
    	        break;
    	}
    	
	}
	
	for(i=0;i<COLUMN-2;i++)
	    printf(" %s ",resultList[i]?"true":"false");
	
	
	return 0;
}

