// Very simple code of power .


#include <stdio.h>

int power(int a, int b);

int main(){
    int a,b;
    printf("Enter base and power\n");
    scanf("%d %d", &a, &b);

    int p=power(a,b);
    printf("%d is answer", p);

    return 0;
}

int power(int a, int b){

    if(b==0){
        return 1;
    }

    return a*power(a,b-1);
}