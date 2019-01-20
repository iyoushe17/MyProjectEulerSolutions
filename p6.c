#include<stdio.h>

int main() {
    
    long int sumSqr = 0, sqrSum  = 0;

    for(int i=1; i<=100; i++) {
        sumSqr+= i*i;              
        sqrSum+= i;
    }

    printf("\n The difference is: %d", (sqrSum*sqrSum) - sumSqr);
    
    return 0;
}
