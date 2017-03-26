#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n; cin>>n;
	int p;
	int a;
	set<int> total;
	
	for( int i = 1 ; i <= 2 ; i++ ) {
		cin>>p;
		
		for( int i = 1 ; i <= p ; i++ ) {
			cin>>a;
			if( a > 0 && a <= n ) { total.insert(a); }
		}	
	}
	
	if( total.size() == n ) { cout<<"I become the guy."; }
	else{ cout<<"Oh, my keyboard!"; }
	
	return 0;
}
