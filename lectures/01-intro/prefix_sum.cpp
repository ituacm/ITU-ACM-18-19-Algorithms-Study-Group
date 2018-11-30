#include <cstdio>

const int MAXN = 1e5 + 15;

int N, Q;

long long int ar[MAXN];
long long int pre[MAXN];

int main(){

    scanf("%d", &N);

    for( int i=1 ; i<=N ; i++ ){
        scanf("%lld", ar + i);
        pre[i] = pre[i - 1] + ar[i];
    }

    scanf("%d", &Q);

    for( int l, r, i=0 ; i<Q ; i++ ){
        scanf("%d%d", &l, &r);
        printf("%lld\n", pre[r] - pre[l - 1]);
    }

    return 0;
}