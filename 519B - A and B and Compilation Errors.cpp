#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; scanf( "%d", &n );
	
	int a, sum_a = 0;
	for( int i = 0 ; i < n ; i++ ) {
		scanf( "%d", &a );
		sum_a += a;
	}

	int b, sum_b = 0;
	for( int i = 0 ; i < n - 1 ; i++ ) {
		scanf( "%d", &b );
		sum_b += b;
	}
	
	int c, sum_c = 0;
	for( int i = 0 ; i < n - 2 ; i++ ) {
		scanf( "%d", &c );
		sum_c += c;
	}
	
	printf( "%d %d", sum_a - sum_b, sum_b - sum_c );
			
	return 0;
}
