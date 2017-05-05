#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin>>s;
	bool aux = true;
	
	for( int i = 0 ; i < s.size() ; i++ ) {
		if( s[i] == 'H' ) {
			cout<<"YES";
			aux = false;
			break;
		}
		else if( s[i] == 'Q' ) {
			cout<<"YES";
			aux = false;
			break;
		}
		else if( s[i] == '9' ) {
			cout<<"YES";
			aux = false;
			break;
		}
	}
	
	if(aux) {
		cout<<"NO";
	}
		
	return 0;
}
