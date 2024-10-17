#include <stdio.h>

int maze2(int n, int m);

int main(){
    int n,m;
    printf("Enter rows and columns\n");
    scanf("%d %d", &n, &m);

    int noofways=maze2(n,m);
    printf("%d", noofways);

    return 0;
}

int maze2(int n, int m){

    int rightways=0;
    int downways=0;

    if(n==1 && m==1){
        return 1;
    }

    if(n==1){
        rightways+=maze2(n,m-1);
    }

    if(m==1){
        downways+=maze2(n-1,m);
    }

    if(n>1 && m>1){

        rightways+=maze2(n,m-1);
        downways+=maze2(n-1,m);

    }

    return rightways+downways;

}