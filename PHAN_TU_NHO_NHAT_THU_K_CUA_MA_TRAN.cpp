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
		int n, k; cin >> n >> k;
		int a[n * n];
		for(auto &x : a) cin >> x;
		sort(a, a + n * n);
		//for(auto x : a) cout << x << " "; cout << endl;
		int cnt = 1;
		for(int i = 1; i < n * n; i++){
			if(a[i] >= a[i - 1]) ++cnt;
			if(cnt == k){
				cout << a[i] << '\n';
				break;
			}
		}
	}
	return 0;
}
