/* 
We have a stairs and we have to get on nth stairs by taking single step or double step.
Then how many number of possibble ways to reaches on nth stairs.
*/

#include <stdio.h>

int stairs(int n);

int main(){
    int n;
    printf("Enter number of stairs\n");
    scanf("%d", &n);

    int s=stairs(n);
    printf("No of possible ways is %d", s);

    return 0;
}

int stairs(int n){
    if(n==1 || n==2){
        return n;
    }

    return stairs(n-1)+stairs(n-2);

}