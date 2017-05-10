#include <bits/stdc++.h>
using namespace std;

vector<int> v( 100001, 0 );
void table( int a, int b, vector<int> &c, int &d ) {
	for( int i = a ; i <= b ; i += a ) {
		if( v[i] == 0 ) {
			v[i] = 1;
			d++;
		}
	}
}

int main() {
	int k, l, m, n, d;
	scanf( "%d %d %d %d %d", &k, &l, &m, &n, &d );
		
	int ans = 0;
	
	table( k, d, v, ans );
	table( l, d, v, ans );
	table( m, d, v, ans );
	table( n, d, v, ans );
	
	printf( "%d", ans );
	
	return 0;
}
