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
		if( bus[i][1] == 'O' && bus[i][0] == bus[i][1] ) {
			bus[i][1] = bus[i][0] = '+';
			aux = true;
		}
		else if( bus[i][4] == 'O' && bus[i][3] == bus[i][4] ) {
			bus[i][4] = bus[i][3] = '+';
			aux = true;			
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
