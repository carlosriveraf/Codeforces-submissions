#include <bits/stdc++.h>
using namespace std;

int main(){
	char s[200];
	char t[200];
	cin.getline( s, 200, '\n' );
	cin.getline( t, 200, '\n' );
	
	strrev(s);
	
	if( strcmp( s, t ) == 0 ) { cout<<"YES"; }
	else{ cout<<"NO"; }
	
	return 0;
}
