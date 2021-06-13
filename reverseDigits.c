#include <stdio.h>

 

int main(void) {

    int number  = 1234567;
    
    int temp;
    int count,a,b,i;
    int mfactor =1;
    
    temp = number;
    /*Count the number of digits*/
    while(temp%10) //count = 6
    {
        count++;
        temp = temp /10;
    }
        
    //numArr = (int *)malloc(count*sizeof(int));
    
    temp = number;
    number = 0;
    i = 0;
    
    /*If number of digits is odd skip the last digit from swap*/
    if(count%2 != 0)
    {
        
        //count = 1;
        number = temp%10;
        temp = temp/10;
        i = 1;
        mfactor = 10;
    
    }
    
    printf(" %d %d %d \n ", i,temp,count);
    /*Loop through the digits and swap 2 at a time starting from LSB*/
    for(;i<count;i=i+2)
    {
        a = temp%(10) ;
        temp = temp/(10);
        b = temp%(10) ;
        temp = temp/(10);        
        
        printf("[%d %d] ",a,b);
        number+=b*mfactor;
        mfactor = mfactor*10;
        number+=a*mfactor;
        mfactor = mfactor*10;
        printf("[%d] ",number);
    }

printf(" %d ", number);

	return 0;
}

