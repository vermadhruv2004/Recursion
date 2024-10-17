#include <stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    int s=sum(n);
    printf("%d", s);

    return 0;
}

int sum(int n){

    if(n==0){
        return 0;
    }

    return n+sum(n-1);
}