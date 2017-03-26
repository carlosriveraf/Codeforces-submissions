#include <bits/stdc++.h>
using namespace std;

int main () {
	map<string, string> map;
	
	int n, m;
	cin>>n>>m;
	
	string a, b, c;
	
	for( int i = 1 ; i <= m ; i++ ) {
		cin>>a>>b;
		
		if( a.size() <= b.size() ) { map[a] = a; }
		else{ map[a] = b; }
		
	}
	
	for( int i = 1 ; i <= n ; i++ ) {
		cin>>c;
		cout<<map[c]<<" ";	
	}
		
	return 0;
}
