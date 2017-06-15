#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	map<string, int> database;
	
	string user;
	for( int i = 0 ; i < n ; i++ ) {
		cin >> user;
		if( database[user] == 0 ) {
			cout << "OK" << endl;
			database[user] = 1;
		}
		else{
			cout << user << database[user]++ << endl;
		}
	}
		
	return 0;
}
