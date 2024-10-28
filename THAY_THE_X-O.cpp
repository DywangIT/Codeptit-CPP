#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void dfs(int i, int j, int n, int m, char a[][25], vector<vector<int>> &vis){
    vis[i][j] = 1;
    for(int k = 0; k < 4; k++){
        int x = dx[k] + i;
        int y = dy[k] + j;
        if(x >= 1 && x <= n && y >= 1 && y <= m && !vis[x][y] && a[x][y] == 'O') dfs(x, y, n, m, a, vis);
    }
}


int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n, m; 
        cin >> n >> m;
        char a[25][25];
        vector<vector<int>> vis(25, vector<int>(25, 0));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++) cin >> a[i][j];
        }
        for(int j = 1; j <= m; j++){
            if(!vis[1][j] && a[1][j] == 'O') dfs(1, j, n, m, a, vis);
            if(!vis[n][j] && a[n][j] == 'O') dfs(n, j, n, m, a, vis);
        }
        for(int i = 1; i <= n; i++){
            if(!vis[i][1] && a[i][1] == 'O') dfs(i, 1, n, m, a, vis);
            if(!vis[i][m] && a[i][m] == 'O') dfs(i, m, n, m, a, vis);
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(vis[i][j]) cout << 'O' << " ";
                else cout << 'X' << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
