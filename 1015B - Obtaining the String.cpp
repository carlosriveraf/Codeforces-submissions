#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	
	string t;
	cin >> t;
	
	vector<int> output;
	
	int ii, jj;
	int cant = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == t[i]) {
			continue;
		}
		else{
			ii = i;
			for(int j = i + 1; j < n; j++) {
				if(s[j] == t[i]) {
					cant += (j - i);
					char aux = s[j];
					for(int ii = j; ii > i; ii--) {
						output.push_back(ii);
						s[ii] = s[ii-1];
					}
					s[i] = aux;
					break;
				}
			}
		}
	}
	if(s == t) {
		if(cant <= 10000) {
			cout << cant << endl;
			for(int i = 0; i < output.size(); i++) {
				cout << output[i] << " ";
			}
		}
		else{
			cout << "-1";
		}
	}
	else{
		cout << "-1";
	}
	
	return 0;
}
