#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1000000;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		int res = 0;
		int dem = 0;
		for(auto x : a){
			int cnt = 0;
			while(x > 0){
				if(x & 1){
					--x;
					++res;
				}
				else{
					x /= 2;
					++cnt;
				}
			}
			dem = max(dem, cnt);
		}
		cout << res + dem << "\n";
	}
	return 0;
}
