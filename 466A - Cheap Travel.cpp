#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m; scanf( "%d %d", &n, &m );
	int a, b; scanf( "%d %d", &a, &b );
	
	int x = ( n / m ) * b + ( n % m ) * a;
	int y = ( ( n / m ) + 1 ) * b;
	int z = n * a;
	
	int ans = min( x, min( y, z ) );
	
	printf( "%d", ans );
	
    return 0;
}
