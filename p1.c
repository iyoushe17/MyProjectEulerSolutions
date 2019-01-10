#include<stdio.h>

int main(void)
{   
    int sum; 
    for(int i=0; i<1000; i++)
    {
        if((i%3==0)||(i%5==0))
         sum+=1;
    } 
    return 0; 
}