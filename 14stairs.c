/* 
We have a stairs and we have to get on nth stairs by taking single step or double step or
triple step. Then how many number of possibble ways to reaches on nth stairs.
*/

#include <stdio.h>

int stairs(int n);

int main(){
    int n;
    printf("Enter a no of stairs\n");
    scanf("%d", &n);

    int s=stairs(n);
    printf("%d", s);

    return 0;
}

int stairs(int n){

    if(n==1 || n==2 || n==3){
        return n;
    }

    return stairs(n-1)+stairs(n-2)+stairs(n-3);
}