#include <cstdio>

int f( int x ){

    if( x < 1 )
        return 0;

    if( x == 1 )
        return 1;

    return f(x - 1) + 1;
}

int main(){

    int n;

    scanf("%d", &n);

    printf("%d\n", f(n));

    return 0;
}