#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void bfs(int n, int m, int x, int y, int z, int t, vector<vector<int>> grid, vector<vector<int>> &step){
    queue<pair<int, int>> q;
    q.push({x, y});
    while(!q.empty()){
        int curx = q.front().first;
        int cury = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int x1 = curx + dx[i];
            int y1 = cury + dy[i];
            if(x1 >= 0 && x1 < n && y1 < m && y1 >= 0 && grid[x1][y1] == 1){
                q.push({x1, y1});
                step[x1][y1] = step[curx][cury] + 1;
                grid[x1][y1] = 0;
                if(x1 == z && y1 == t) return;
            }
        }
    }
}

int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n, m, x, y, z, t;
        cin >> n >> m >> x >> y >> z >> t;
        vector<vector<int>> grid(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) cin >> grid[i][j];
        }
        vector<vector<int>> step(n, vector<int>(m, 0));
        if(x == z && y == t) cout << 0;
        else if(grid[x][y]&& grid[z][t]){
            bfs(n, m, x, y, z, t, grid, step);
            if(step[z][t]) cout << step[z][t];
            else cout << -1;
        }
        else cout << -1;
        cout << "\n";
    }
    return 0;
}
