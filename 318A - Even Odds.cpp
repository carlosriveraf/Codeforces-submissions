#include <bits/stdc++.h>
using namespace std;

int main() {	
	long long n, k;
	cin>>n>>k;
	
	long long n1 = n / 2;
	long long n2 = ( n + 1 ) / 2;
	if( n % 2 == 0 ) {
		if( 1 <= k && k <= n1 ) {
			cout<< 2 * k - 1;
		}
		else if( n1 < k && k <= n ) {
			cout<< 2 * ( k - n1 );
		}
	}
	else{
		if( 1 <= k && k <= n2 ) {
			cout<< 2 * k - 1;
		}
		else if( n2 < k && k <= n ) {
			cout<< 2 * ( k - n2 );
		}	
	}
	
	return 0;
}
