#include<stdio.h>

int main() {
    long sum = 0, num1 = 1, num2 = 2, numnxt = 0;
    
    while(numnxt <= 4000000)    {
        numnxt = num1 + num2;
        
        if(numnxt % 2 == 0)
             sum+= numnxt;       
                    
        num1 = num2;
        num2 = numnxt; 
    }

    printf("\n The sum is %d", sum);
    return 0;
}

