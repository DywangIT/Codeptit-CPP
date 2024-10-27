#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1e6;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	faster();
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++) cin >> a[i][j];
		}
		int K[3][3];
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++) cin >> K[i][j];
		}
		ll sum = 0;
		for(int i = 1; i <= n - 2; i++){
			for(int j = 1; j <= m - 2; j++) {
				sum += a[i - 1][j - 1] * K[0][0] + a[i - 1][j] * K[0][1] + a[i - 1][j + 1] * K[0][2] + a[i][j - 1] * K[1][0] + a[i][j] * K[1][1] + a[i][j + 1] * K[1][2] + a[i + 1][j - 1] * K[2][0] + a[i + 1][j] * K[2][1] + a[i + 1][j + 1] * K[2][2]; 
			}
		}
		cout << sum << "\n";
	}
	return 0;
}
