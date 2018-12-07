#include <cstdio>

int main(){

    int T, N, h;

    scanf("%d", &T);

    for( int i=0 ; i<T ; i++ ){

        h = 1;

        scanf("%d", &N);

        for( int j=0 ; j<N ; j++ )
            if( j & 1 )
                h++;
            else
                h <<= 1;
        
        printf("%d\n", h);
    }

    return 0;
}