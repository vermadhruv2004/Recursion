#include <stdio.h>

int maze(int cr, int cc, int er, int ec);

int main(){
    int n, m;
    printf("Enter no of rows and no of columns\n");
    scanf("%d %d", &n, &m);

    int noofways = maze(0, 0, n - 1, m - 1);
    printf("%d\n", noofways);

    return 0;
}

int maze(int cr, int cc, int er, int ec){
    if(cr > er || cc > ec) {
        return 0;  // out of bounds
    }
    
    if(cr == er && cc == ec){
        return 1;  // reached the end
    }

    int rightways = maze(cr, cc + 1, er, ec);  // move right
    int downways = maze(cr + 1, cc, er, ec);   // move down

    return rightways + downways;
}
