#include <bits/stdc++.h>
using namespace std;

int year( int a ) {
	set<int> b;
	int a1 = a;
	int c;
	while( a1 != 0 ) {
		c = a1 % 10;
		b.insert(c);
		a1 /= 10;
	}
	
	if( b.size() == 4 ) return a;
	else return year( a + 1 );
}

int main() {
	int y;
	scanf( "%d", &y );
	
	int x = year( y + 1 );
	printf( "%d", x );
	
	return 0;
}
