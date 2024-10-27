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
		int arr[100005] = {};
		int n; cin >> n;
		int a[n][n];
		for(int i = 0; i < n; i++){
			set<int> se;
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				se.insert(a[i][j]);
			}
			for(auto x : se) ++arr[x];
		}
		int cnt = 0;
		for(int i = 0; i < 100005; i++){
			if(arr[i] == n) ++cnt; 
		}
		cout << cnt << '\n';
	}
	return 0;
}
