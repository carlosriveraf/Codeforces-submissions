#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a;
	float lado;
	
	for( int i = 1 ; i <= n ; i++ ) {
		cin>>a;
		
		lado = (float)( 360.0 / ( 180.0 - a ) );
		
		if( lado == floor(lado) ) { cout<<"\nYES"; }
		else{ cout<<"\nNO"; }
	}
		
	return 0;
}
