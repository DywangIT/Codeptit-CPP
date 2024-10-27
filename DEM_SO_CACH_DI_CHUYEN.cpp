#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1000000

int dx[] = {0, 1};
int dy[] = {1, 0};

void Try(int n, int k, vector<vector<int>> grid, int i, int j, int &cnt, int sum){
	if(i >= n || j >= n) return;
	sum += grid[i][j];
	if(i == n - 1 && j == n - 1){
		if(sum == k) ++cnt;
		return;
	}
	if(sum > k){
		return;
	}
	for(int t = 0; t <= 1; t++){
		int x = i + dx[t];
		int y = j + dy[t];
		Try(n, k, grid, x, y, cnt, sum);
	}
}

void solve(int n, int k, vector<vector<int>> grid){
	int cnt = 0, sum = 0;
	Try(n, k, grid, 0, 0, cnt, sum);
	cout << cnt << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector<vector<int>> grid(n, vector<int>(n));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) cin >> grid[i][j];
		}
		solve(n, k, grid);
	}
	return 0;
}
