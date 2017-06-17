#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	char bus[n][5];
	
	for( int i = 0 ; i < n ; i++ ) {
		for( int j = 0 ; j < 5 ; j++ ) {
			cin >> bus[i][j];
		}
	}
	
	bool aux = false;
	for( int i = 0 ; i < n ; i++ ) {
		for( int j = 1 ; j < 5 ; j++ ) {
			if( bus[i][j] == 'O' && bus[i][j-1] == bus[i][j] ) {
				bus[i][j] = bus[i][j-1] = '+';
				aux = true;
			}
			if( aux ) break;
		}
		if( aux ) break;
	}
	
	if( aux ) {
		cout << "YES" << endl;
		for( int i = 0 ; i < n ; i++ ) {
			for( int j = 0 ; j < 5 ; j++ ) {
				cout << bus[i][j];
			}
			cout << endl;
		}
	}
	else{
		cout << "NO";
	}
		
	return 0;
}
