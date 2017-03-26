#include <bits/stdc++.h>
using namespace std;

int main(){
	char s1[250]; cin.getline( s1, 250, '\n' );
	char s2[250]; cin.getline( s2, 250, '\n' );
	
	strlwr(s1);
	strlwr(s2);
	
	if( strcmp( s1, s2 ) == 0 ) { cout<<"0"; }
	else if( strcmp( s1, s2 ) > 0 ) { cout<<"1"; }
	else{ cout<<"-1"; }
			
	return 0;
}
