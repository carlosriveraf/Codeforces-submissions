#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; scanf( "%d", &n );

	char number[n];
	for( int i = 0 ; i < n ; i++ ) {
		cin >> number[i];
	}
	
	int a;
	stack<int> s;
	for( int i = 0 ; i < n ; i++ ) {
		a = number[i];
		if( !s.empty() && a != s.top() ) {
			s.pop();
		}
		else{
			s.push(a);
		}		
	}
	
	cout << s.size();
	
	return 0;
}
