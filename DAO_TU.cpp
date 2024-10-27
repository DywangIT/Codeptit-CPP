#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s, tar, a[1000];
		getline(cin, s);
		stringstream ss(s);
		int cnt = 0;
		while(ss >> a[cnt]){
			++cnt;
		}
		for(int i = cnt - 1; i >= 0; i--) cout << a[i] << " ";
		cout << '\n';
	}
	
	return 0;
}
