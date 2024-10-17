#include <stdio.h>

void fun(int n);                                  // function declaration

int main(){
    int n;
    printf("Enter a no\n");
    scanf("%d", &n);

    fun(n);                                       // function call
    return 0;
}

void fun(int n){                                  // function defination

    if(n==0){            // Base case
        return;
    }

    printf("Good Morning\n");

    fun(n-1);           // recursive call

    return;
}