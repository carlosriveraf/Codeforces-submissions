#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; 
	scanf( "%d %d", &n, &m );
	int m1 = m;
	
	vector<int> v;
	vector<int> puzzle;
	
	int f;
	while( m1-- ) {
		scanf( "%d", &f );
		puzzle.push_back( f );
	}
	
	sort( puzzle.begin(), puzzle.end() );
	
	int A;
	for( int i = 0 ; i <= m - n ; i++ ) {
		A = puzzle[i + n - 1] - puzzle[i];
		v.push_back(A);
	}
	
	sort( v.begin(), v.end() );
	
	cout<<v[0];
		
	return 0;
}
