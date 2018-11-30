#include <cstdio>

int main(){

    int N, cur = 0, res = 0;

    scanf("%d", &N);

    for( int k, i=0 ; i<N ; i++ ){
        
        scanf("%d", &k);

        cur += k;

        if( cur == -1 ){
            res++;
            cur = 0;
        }
    }

    printf("%d\n", res);
    return 0;
}