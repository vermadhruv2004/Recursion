#include <stdio.h>

int fibo(int n);

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    int x=fibo(n);
    printf("%d", x);
}

int fibo(int n){
    if(n==1 || n==2){
        return 1;
    }

    return fibo(n-1)+fibo(n-2);
}