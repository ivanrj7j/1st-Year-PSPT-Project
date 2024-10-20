#include <stdio.h>
#include <math.h>

/*
4.	To sum the following series for n terms
b. 1 + x^2/(2!) + x^4/(4! )+ ... + x^2n/(2n!)
*/


int factorial(int x){
    int result = 1;
    for(int i = 1; i <= x; i++){
        result *= i;
    }
    return result;
}

int main(){
    int n;
    double sum;
    double x;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter x: ");
    scanf("%lf",&x);
    // initializing variables

    sum = 0;
    for(int i = 0; i < n; i++){
        double term = pow(x, 2*i) / factorial(2 * i);
        sum += term;
    }

    printf("The sum of n numbers in the series is %lf\n", sum);
}