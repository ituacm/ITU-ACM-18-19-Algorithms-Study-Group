#include <cstdio>

const long long int MOD = 1e9 + 7;

long long int f( long long int n, long long int p ){

    if( p == 0LL )
        return 1LL;
    if( p == 1LL )
        return n;

    long long int next = f(n, p >> 1);

    if( p & 1LL )
        return (n * ((next * next) % MOD)) % MOD;
    
    return (next * next) % MOD;
}

int main(){

    long long int n, p;

    scanf("%lld%lld",&n, &p);

    n %= MOD;

    printf("%lld\n", f(n, p));
    return 0;
}