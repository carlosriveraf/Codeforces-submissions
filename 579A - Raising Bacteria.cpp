#include <bits/stdc++.h>
using namespace std;

int main(){
    int x; cin>>x;
    int count = 0;
    
    while( x != 0 ) {
    	if( x % 2 == 1 ) { x--; count++; }
    	else{ x/=2; }
    }
    
    cout<<count;
    
    return 0;
}
