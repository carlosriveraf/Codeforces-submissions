#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int vector[n];
	double suma = 0;

	for( int i = 0 ; i < n ; i++ ) {
		cin>>vector[i];
		suma += vector[i];
	}
	
	cout<<(suma/n);
		
	return 0;
}
