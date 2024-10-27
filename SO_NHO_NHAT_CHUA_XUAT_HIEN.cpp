#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		set<int> se;
		int n; cin >> n;
		int a[n];
		for(auto &x : a){
			cin >> x;
			se.insert(x);
		}
		int i;
		for(i = 1; i <= se.size(); i++){
			if(se.find(i) == se.end()){
				cout << i;
				break;
			}
		}
		if(i == se.size() + 1) cout << se.size() + 1;
		cout << '\n';
	}
	return 0;
}
