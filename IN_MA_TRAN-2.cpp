#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

void cuon(vector<vector<int>> v, int n, int x, int y){
    while(x >= 1 && x <= 4 * n && y >= 1 && y <= 4 * n){
        if(x > 2 * n && y <= 2 * n){
            for(int i = x; i > 4*n + 1 - x - 1; i--) cout << v[i][y] << " ";
            x = 4 * n + 1 - x - 1;
        }
        else if(x <= 2 * n && y <= 2 * n){
            for(int j = y; j < 4 * n + 1 - y + 1; j++) cout << v[x][j] << " ";
            y = 4 * n + 1 - y + 1;
        }
        else if(x <= 2 * n && y > 2 * n){
            for(int i = x; i < 4 * n + 1 - x + 1; i++) cout << v[i][y] << " ";
            x = 4 * n + 1 - x + 1;
        }
        else if(x > 2 * n && y > 2 * n){
            for(int j = y; j > 4 * n + 1 - y - 1; j--) cout << v[x][j] << " ";
            y = 4 * n + 1 - y - 1;
        }
    }
    cout << "\n";
}

int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<vector<int>> v(4 * n + 1, vector<int>(4*n + 1, 0));
        int tmp = 1;
        for(int i = 1; i <= 4 * n; i++){
            for(int j = 1; j <= 4 * n; j++) v[i][j] = tmp++;
        }
        int x = 2*n + 1, y = 2*n;
        cuon(v, n, x, y);
        cuon(v, n, x - 1, y + 1);
    }
    return 0;
}
