#include <bits/stdc++.h>
using namespace std;

int GCD( int a, int b ) {
     if( b == 0 ) return a;
     return GCD ( b, a % b );
}

int main() {	
	int a, b, n;
	scanf( "%d %d %d", &a, &b, &n );
	
	bool c = true;
	while( n != 0 ) {
		if( c ) {
			n = n - GCD( a, n );
			c = false;
		}
		else{
			n = n - GCD( b, n );
			c = true;
		}
	}
	
	if( c ) cout<<1;
	else cout<<0;
		
	return 0;
}
