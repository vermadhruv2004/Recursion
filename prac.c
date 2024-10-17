#include <stdio.h>

int maze(int cr, int cc, int er, int ec);

int main(){
    int n,m;
    printf("Enter rows and columns\n");
    scanf("%d %d", &n, &m);

    int ways=maze(1,1,n,m);
    printf("Ways is %d\n", ways);

    return 0;
}

int maze(int cr, int cc, int er, int ec){

    int rightways=0;
    int downways=0;

    if(cr==er && cc==ec){
        return 1;
    }

    if(cr==er){
        rightways+=maze(cr,cc+1,er,ec);
    }

    if(cc==ec){
        downways+=maze(cr+1,cc,er,ec);
    }

    if(cr<er && cc<ec){
        rightways+=maze(cr,cc+1,er,ec);
        downways+=maze(cr+1,cc,er,ec);
    }

    return rightways+downways;
}