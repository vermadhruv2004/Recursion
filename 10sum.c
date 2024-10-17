#include <stdio.h>

int sum(int s, int n);

int main(){
    int n;
    printf("Enter a no\n");
    scanf("%d", &n);

    int ss=sum(0,n);
    printf("%d", ss);

    return 0;
}

int sum(int s, int n){

    if(n==0 || n==0){
        printf("%d", s);
    }

   return sum(s+n,n-1);

    
}