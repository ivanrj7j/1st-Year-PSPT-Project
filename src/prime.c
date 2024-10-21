#include <stdio.h>
#include <math.h>

/*
2.	To check whether a number is prime number or not.
*/


int main(){
    int num, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 1){
        printf("1 is not a prime number\n");
        return 0;
    }
    for(int i = 2; i < sqrt(num); i++){
        if(num % i == 0){
            isPrime = 0;
            break;
        }
        if(i != 2){
            i++;
        }
    }

    if(isPrime){
        printf("%d is a prime number.", num);
    }else{
        printf("%d is not a prime number.", num);
    }

    printf("\n");
}