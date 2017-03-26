#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int m; cin>>m;
	char snake[n][m];
	
	for( int i = 0 ; i < n ; i+=2 ) {
		for( int j = 0 ; j < m ; j++ ) { snake[i][j] = '#'; }	
	}
	
	for( int i = 1 ; i < n ; i+=4 ) {
		for( int j = 0 ; j < m - 1 ; j++ ) { snake[i][j] = '.'; }
		snake[i][m-1] = '#';
	}

	for( int i = 3 ; i < n ; i+=4 ) {
		for( int j = 1 ; j < m ;j++ ) { snake[i][j] = '.'; }
		snake[i][0] = '#';
	}
	
	for( int i = 0 ; i < n ; i++ ) {
		for( int j = 0 ; j < m ; j++ ) { cout<<snake[i][j]; }
		cout<<endl;
	}	
					
	return 0;
}
