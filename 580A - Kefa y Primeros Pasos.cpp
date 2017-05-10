#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	scanf( "%d", &n );
	
	vector<int> v;
	int a;
	while( n-- ) {
		scanf( "%d", &a );
		v.push_back(a);		
	}		
	
	int m = 1, ml = 1;
	
	for( int i = 1 ; i < v.size() ; i++ ) {
		if( v[i] >= v[i-1] ) {
			m++;
			ml = max( ml, m );					
		}
		else{
			m = 1;			
		}
	}
	
	cout<<ml;
	
	return 0;
}
