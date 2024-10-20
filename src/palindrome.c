#include <stdio.h>

/*
1.	To check whether a number is palindrome or not
*/

int main(){
    int num, copy;
    int reversed = 0;
    // initializing variables
    // copy is used to preserve the original value of num 

    printf("Enter a number: ");
    scanf("%d", &num);
    copy = num;
    // getting the values 

    while(num > 0){
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }
    // reversing the number 

    if(reversed == copy){
        printf("%d is a palindrome.", reversed);
    }else{
        printf("%d is not a palindrome.", copy);
    }

    printf("\n");
    // giving the output 
}