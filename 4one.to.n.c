#include <stdio.h>

void fun(int x, int n);     // Parameterised

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    fun(1,n);
    return 0;
}

void fun(int x, int n){

    if(x>n){
        return;
    }

    printf("%d\n", x);

    fun(x+1,n);        // Recursive call

    return;
}