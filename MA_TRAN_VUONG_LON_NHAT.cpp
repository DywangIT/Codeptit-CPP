#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1e6;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool ok(int n, vector<vector<char>> &v, int k){
	for(int i = 0; i <= n - k - 1; i++){
		for(int j = 0; j <= n - k - 1; j++)	{
			int check1 = 1, check2 = 1;
			for(int z = i; z <= i + k; z++){
				if(v[z][j] == 'O' || v[z][j + k] == 'O') check1 = 0;	
			}
			for(int z = j; z <= j + k; z++){
				if(v[i][z] == 'O' || v[i + k][z] == 'O') check2 = 0;
			}
			if(check1 && check2) return true;
		}
	}
	return false;
}

void solve(int n, vector<vector<char>> &v){
	for(int k = n - 1; k >= 0; k--){
		if(ok(n, v, k)){
			cout << k + 1 << "\n";
			return;	
		}
	}
}

int main(){
	faster();
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<vector<char>> v(n, vector<char>(n));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) cin >> v[i][j];
		}
		solve(n, v);
	}
	return 0;
}