#include <bits/stdc++.h>
using namespace std;

int main(){
	int a; cin>>a;
	int b; cin>>b;
	int c; cin>>c;
	int vector_operacion[6];
	int maximo = 0;
	
	vector_operacion[0] = ( a + b + c );
	vector_operacion[1] = a * b * c;
	vector_operacion[2] = a + ( b * c );
	vector_operacion[3] = ( a + b ) * c;
	vector_operacion[4] = ( a * b ) + c;
	vector_operacion[5] = a * ( b + c );
	
	for( int i = 0 ; i < 6 ; i++ ) {	
		if( maximo < vector_operacion[i] ) { maximo = vector_operacion[i]; }
	}
	
	cout<<maximo;
	
	return 0;
}
