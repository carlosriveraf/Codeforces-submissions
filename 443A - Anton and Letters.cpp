#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; getline( cin, s );
	set<char> letters;
	for( int i = 0 ; i < s.size() ; i++ ) {
		if( 'a' <= s[i] && s[i] <= 'z' ) {
			letters.insert( s[i] );
		}		
	}
	
	cout << letters.size();
	
	return 0;
}
