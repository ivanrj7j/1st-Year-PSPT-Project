#include <stdio.h>
#include <math.h>

/*
4.	To sum the following series for n terms
a. 1 + 1/8 + 1/27 + ... 1/n^3
*/

int main(){
    int n;
    double sum = 0;

    printf("Enter n: ");
    scanf("%d",&n);
    // initializing variables

    for(int i = 1; i <= n; i++){
        sum += pow(i, -3);
    }

    printf("The sum of n numbers in the series is %lf\n", sum);
}