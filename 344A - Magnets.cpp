#include <bits/stdc++.h>
using namespace std;

int main() {	
	int n; scanf( "%d", &n );
	string s1; cin>>s1;
	
	int x = n - 1;
	string s;
	int cont = 1;
	while( x-- ) {
		cin>>s;
		if( s != s1 ) {
			s1 = s;
			cont++;
		}
	}
	
	printf( "%d", cont );
	
	return 0;
}
