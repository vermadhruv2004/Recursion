#include <stdio.h>

int factorial(int n);         // Function declaration.

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    int fact=factorial(n);
    printf("%d", fact);
    return 0;
}

int factorial(int n){         // Corrected function name

    if(n == 1 || n == 0){
        return 1;              // Correct return value for base case
    }

    return n * factorial(n - 1);
}
