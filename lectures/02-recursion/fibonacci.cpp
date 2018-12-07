#include <cstdio>

int cache[100000];

int fib( int n ){

    if( cache[n] )
        return cache[n];

    if( n < 0 )
        return 0;
    if( n < 2 )
        return 1;
    
    cache[n] = fib(n - 1) + fib(n - 2);
    return cache[n];
}

int main(){

    int n;

    scanf("%d", &n);

    printf("%d\n", fib(n));
    return 0;
}