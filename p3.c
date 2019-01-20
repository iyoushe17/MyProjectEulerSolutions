#include<stdio.h>
#include<math.h>

int main() {
    long long num;
    int count, maxFact;

    printf("\n Please enter the number you wish to find out the prime numbers of: ");
    scanf("%lld", &num);

    while(!(num % 2)) {           //filters out the factor '2' from the number's set of factors 
        num >>= 1;                // same as num = num/2        
        printf("\n %lld", num);
    }  
    
    for(long long i=3; i<sqrt(num); i+2) {

        while((num % i)==0) {
            num = num/i;
            maxFact = i; 
            printf("\n %d, %d", i,num);
        }
    }
    printf(" \n Highest prime factor is: ", maxFact);

    printf("\n" , num);

    return 0;
}
