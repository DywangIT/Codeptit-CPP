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
		int n; cin >> n;
		int a[n]; for(auto &x : a) cin >> x;
		int l, r; cin >> l >> r;
		int cnt = 1;
		int i = l + 1;
		while(a[i] >= a[i - 1] && i <= r){
			++cnt;
			++i;
		}
		while(a[i] <= a[i - 1] && i <= r){
			++cnt;
			++i;
		}
		if(cnt == r - l + 1) cout << "Yes" << '\n';
		else cout << "No" << '\n';
	}
	return 0;
}
