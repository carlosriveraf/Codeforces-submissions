#include <bits/stdc++.h>
using namespace std;

#define tam 1000005
bool composite[tam];
void compuesto(){
    memset ( composite, false, sizeof (composite) );
    
    for( int i = 4 ; i < tam ; i += 2 ) {
    	composite[i] = true;
    }
	
    for( int i = 3 ; i*i <= tam ; i+=2) {
        if( !composite[i] ) {
            for( int h = 2 ; i*h <= tam ; ++h ) {
            	composite[i*h] = true;
            }
        }
    }
}

int main() {	
	int n;
	scanf( "%d", &n );
	
	compuesto();
	
	if( n % 2 == 0 ) {
		for( int i = 1 ; i <= n / 2 ; i++ ) {
			if( composite[i] && composite[n-i] ) {
				cout<<i<<" "<<n-i;
				return 0;
			}
		}	
	}
	else{
		for( int i = 1 ; i <= ( n - 1 ) / 2 ; i++ ) {
			if( composite[i] && composite[n-i] ) {
				cout<<i<<" "<<n-i;
				return 0;
			}
		}		
	}
	
	return 0;
}
