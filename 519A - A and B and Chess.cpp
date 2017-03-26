#include <bits/stdc++.h>
using namespace std;

int main(){
	char ajedrez[8][8];
	int suma_blancas = 0;
	int suma_negras = 0;
	
	for( int i = 0 ; i < 8 ; i++ ) {
		for( int j = 0 ; j < 8 ; j++ ) {
			cin>>ajedrez[i][j];
			
			switch( ajedrez[i][j] ) {
				case 'Q': suma_blancas += 9; break;
				case 'R': suma_blancas += 5; break;
				case 'B': suma_blancas += 3; break;
				case 'N': suma_blancas += 3; break;
				case 'P': suma_blancas += 1; break;
				case 'K': suma_blancas += 0; break;
				
				case 'q': suma_negras += 9; break;
				case 'r': suma_negras += 5; break;
				case 'b': suma_negras += 3; break;
				case 'n': suma_negras += 3; break;
				case 'p': suma_negras += 1; break;
				case 'k': suma_negras += 0; break;	
			}
		}
	}
	
	if( suma_blancas < suma_negras ) { cout<<"Black"; }
	else if( suma_blancas > suma_negras ) { cout<<"White"; }
	else{ cout<<"Draw"; }
			
	return 0;
}
