#include <bits/stdc++.h>
using namespace std;

int main() {	
	int x;
	scanf( "%d", &x );
	
	int cont = 0;
	for( int i = 5 ; i > 0 ; i-- ) {
		cont += x / i;
		x %= i;
	}
	
	printf( "%d", cont );
		
	return 0;
}
