#include <stdio.h>

/*
3. To print the Fibonacci numbers 
*/

int main(){
    int limit, num1, num2, temp;
    num1 = 0;
    num2 = 1;
    // declaring and initializing the variables 
    // temp variable is used to swap between num1 and num2 

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("0 \n");
    while (num2 <= limit){
        printf("%d \n", num2);

        temp = num2;
        num2 += num1;
        num1 = temp;
        // updating num2 and swapping variables 
    }
}