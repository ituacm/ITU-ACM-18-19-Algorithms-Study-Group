#include <cstdio>
#include <iostream>

using namespace std;

int main(){

    int N;
    int res = 1;

    string s, last;

    cin >> N;
    cin >> last;

    for( int i=1 ; i<N ; i++ ){

        cin >> s;
        
        if( s != last )
            res++;
        
        last = s;
    }

    cout << res << endl;
    return 0;
}