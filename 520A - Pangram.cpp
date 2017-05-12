#include <bits/stdc++.h>
using namespace std;

int main() {	
	int n;
	scanf( "%d", &n );
	
	vector<bool> v( 27, false );
	
	string s;
	cin>>s;	
	if( n >= 26 ) {
		int index;
		for( int i = 0 ; i < s.size() ; i++ ) {
			if(  'a' <= s[i] && s[i] <= 'z' ) {
				index = s[i] - 'a' + 1;
				v[index] = true;
			}
			else{
				index = s[i] - 'A' + 1;
				v[index] = true;
			}
		}
		
		int i;
		for( i = 1 ; i < 27 ; i++ ) {
			if( v[i] ) continue;
			else break;
		}
		
		if( i == 27 ) printf( "YES" );
		else printf( "NO" );
		
	}
	else printf( "NO" );
	
	return 0;
}
