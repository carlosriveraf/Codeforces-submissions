#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; scanf( "%d", &n );
	int v[n + 1];
	
	int p;
	for( int i = 1 ; i <= n ; i++ ) {
		scanf( "%d", &v[i] );
	}
	
	int b[n + 1];
	for( int i = 1 ; i <= n ; i++ ) {
		b[ v[i] ] = i;
	}	
	
	for( int i = 1 ; i <= n ; i++ ) {
		cout<<b[i]<<" ";
	}	
	
	return 0;
}
