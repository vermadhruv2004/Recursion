#include <stdio.h>

void fun(int n);

int main(){
    int n;
    printf("Enter a no\n");
    scanf("%d", &n);

    fun(n);
    return 0;
}

void fun(int n){

    if(n==0){       // Base case.
        return;
    }

    printf("%d\n", n);
    fun(n-1);    // Recursive call

    return;
}