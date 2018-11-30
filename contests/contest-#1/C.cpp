#include <cstdio>

const int MAXN = 1e5 + 15;

int N, res;
int sum[MAXN];

int main(){
	
	scanf(" %d",&N);
	
	for( int i=1 ; i<=N ; i++ ){
		scanf(" %d",sum+i);
		sum[i] += sum[i - 1];
	}
	
	for( int i=1 ; i<N ; i++ )
		if( sum[i] == sum[N] - sum[i] )
			res++;
	
	printf("%d\n",res);
	return 0;
}