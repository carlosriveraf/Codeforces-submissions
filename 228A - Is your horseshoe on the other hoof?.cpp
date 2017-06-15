#include <bits/stdc++.h>
using namespace std;

int main() {
	int color;
	set<int> s;
	for( int i = 0 ; i < 4 ; i++ ) {
		scanf( "%d", &color );
		s.insert(color);		
	}
	
	cout << 4 - s.size();
			
	return 0;
}
