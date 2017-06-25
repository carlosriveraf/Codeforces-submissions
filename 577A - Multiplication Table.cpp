#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int x; cin >> x;
	int n_x = 0;
	
	if( x == 1 ) {
		cout << "1";
		return 0;
	}
	
	for( int i = 1 ; i <= n ; i++ ) {
		if( x % i == 0 && x / i <= n ) {
			n_x++;
		}	
	}
	
	cout << n_x;
	
	return 0;
}
