#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int m; cin>>m;
	char photo[n][m];
	
	for( int i = 0 ; i < n ; i++ ) {
		for( int j = 0 ; j < m ; j++ ) { cin>>photo[i][j]; }
	}
	
	for( int i = 0 ; i < n ; i++ ) {
		for( int j = 0 ; j < m ; j++ ) {
			switch( photo[i][j] ) {
				case 'C': cout<<"#Color"; return 0;
				case 'M': cout<<"#Color"; return 0;
				case 'Y': cout<<"#Color"; return 0;
			}	
		}
	}
	
	for( int i = 0 ; i < n ; i++ ) {
		for( int j = 0 ; j < m ; j++ ) {
			switch( photo[i][j] ) {
				case 'W': cout<<"#Black&White"; return 0;
				case 'G': cout<<"#Black&White"; return 0;
				case 'B': cout<<"#Black&White"; return 0;
			}	
		}
	}
				
	return 0;
}
