#include <stdio.h>

// 5 -> 5 * 4 * 3 * 2 * 1

int fatorial(int n){
    int res;

    //if(n == 1) return 1;
    printf("%d - %d\n", n, &n);

    res = fatorial(n - 1) * n;
    return res;
}

int main(){
    int res;

    res = fatorial(5);

    printf("%d", res);
}