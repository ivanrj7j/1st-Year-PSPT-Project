#include <stdio.h>

/*
5.	To print the following pattern for n rows
Input: n = 4	
Output: 	     1
		       1 2
		     1 2 3
		   1 2 3 4
*/

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%i", &n);
    // initializing the values 

    for (int i = 1; i <= n; i++) {
        int space = n - i;
        for (int j = 1; j <= n; j++) {
            if (j <= space) {
                printf(" ");
            } else {
                printf("%d", j - space);
            }
        }
        printf("\n");
    }
    // getting the output 
    
    return 0;
}
