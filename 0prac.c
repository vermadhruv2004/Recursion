#include <stdio.h>

int maze(int cr, int cc, int er, int ez);

int main(){
    int n,m;
    printf("Enter no of rows and columns\n");
    scanf("%d %d", &n, &m);

    int ways=maze(1,1,n,m);
    printf("Total no of ways is %d\n", ways);

    return 0;
}

int maze(int cr, int cc, int er, int ez){

    int rightways=0;
    int downways=0;

    if(cr==er && cc==ez){
        return 1;
    }

    if(cr==er){
        rightways+=maze(cr,cc+1,er,ez);
    }

    if(cc==ez){
        downways+=maze(cr+1,cc,er,ez);
    }

    if(cr<er && cc<ez){
        rightways+=maze(cr,cc+1,er,ez);
        downways+=maze(cr+1,cc,er,ez);
    }

    return rightways+downways;
}