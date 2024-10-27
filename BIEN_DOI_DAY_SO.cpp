#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(auto &x : a) cin >> x;
		int l = 0, r = n - 1;
		int res = 0;
		while(l <= r){
			if(a[l] == a[r]){
				++l; --r;
			}
			else if(a[l] < a[r]){
				++l;
				a[l] += a[l - 1];
				++res;
			}
			else{
				--r;
				a[r] += a[r + 1];
				++res;
			}
		}
		cout << res << '\n';
	}
	return 0;
}
