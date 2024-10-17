#include <stdio.h>

int fact(int f, int n);

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    fact(1,n);
    return 0;
}

int fact(int f, int n){
    
    if(n==0){                  // In two parameter we can't take two base case.
                               // otherwise we get two answer side by side.
        printf("%d", f);
    }

    return fact(f*n,n-1);
}