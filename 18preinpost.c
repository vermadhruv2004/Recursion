#include <stdio.h>

void preinpost(int n);

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    preinpost(n);
    return 0;
}

void preinpost(int n){

    if(n==0){
        return;
    }

    printf("Pre: %d\n", n);
    preinpost(n-1);

    printf("In: %d\n", n);
    preinpost(n-1);

    printf("Post: %d\n", n);
}