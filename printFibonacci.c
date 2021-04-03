#include <stdio.h>
void printFibonacci(int count)
{
    int current = 0;
    int previous = 0;
    int sum = 0;
    while(count>0)
    {
        if(current == 0 && previous == 0)
        {
            printf("%d",current);
            current = 1;
            printf(" %d",current);
            count+=-2;
        }
        else
        {
            sum = current+previous;
            printf(" %d",sum);
            previous = current;
            current = sum;
            count--;
    
        }
        
    }
    
    
}

int main(int argc, char **argv)
{
    printf("Hello World");
    int count = atoi(argv[1]);
    printFibonacci(count);

    return 0;
}
