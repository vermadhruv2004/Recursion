#include <stdio.h>

int powerlog(int a, int b);

int main(){
    int a,b;
    printf("Enter base and power\n");
    scanf("%d %d", &a, &b);

    int p=powerlog(a,b);
    printf("%d", p);

    return 0;
}

int powerlog(int a, int b){

    if(b==0){
        return 1;
    }

    int x=powerlog(a,b/2);

    if(b%2==0){
        return x*x;
    }

    else{
        return x*x*a;
    }

}