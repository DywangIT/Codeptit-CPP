#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

void dfs(int n, int m, vector<vector<char>>&grid, vector<vector<bool>>&vis, int i, int j){
	vis[i][j] = false;
	for(int k = 0; k < 4; k++){
		int x = dx[k] + i;
		int y = dy[k] + j;
		if(x >= 1 && x <= n && y <= m && y >= 1 && grid[x][y] == 'O') dfs(n, m, grid, vis, x, y);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>> grid(n + 5, vector<char>(m + 5));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++) cin >> grid[i][j];
		}
		vector<vector<bool>> vis(n + 5, vector<bool>(m + 5, true));
		for (int i = 1; i <= n; i++) {
            if (grid[i][1] == 'O' && vis[i][1]) dfs(n, m, grid, vis, i, 1); // First column
            if (grid[i][m] == 'O' && vis[i][m]) dfs(n, m, grid, vis, i, m); // Last column
        }

        for (int j = 1; j <= m; j++) {
            if (grid[1][j] == 'O' && vis[1][j]) dfs(n, m, grid, vis, 1, j); // First row
            if (grid[n][j] == 'O' && vis[n][j]) dfs(n, m, grid, vis, n, j); // Last row
        }
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(vis[i][j]) cout << 'X' << " ";
				else cout << 'O' << " ";
			}
			cout << "\n";
		}
	}
	
	return 0;
}
