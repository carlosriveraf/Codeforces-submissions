#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main() {
	vector<int> v;
	
	v.pb(4); v.pb(7);
	v.pb(44); v.pb(47); v.pb(74); v.pb(77);
	v.pb(444); v.pb(447); v.pb(474); v.pb(477);
	v.pb(744); v.pb(747); v.pb(774); v.pb(777);

	int n; scanf( "%d", &n );
	int a = 0;
	
	for( int i = 0 ; i < v.size() ; i++ ) {
		if( n % v[i] == 0 ) {
			a = 1;
			break;
		}
	}
	
	if( a == 1 ) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
