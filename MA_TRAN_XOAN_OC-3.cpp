#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //



int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n, m; 
        cin >> n >> m;
        int k; cin >> k;
        vector<vector<int>> v(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) cin >> v[i][j];
        }
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        vector<int> res;
        while(h1 <= h2 && c1 <= c2){
            for(int j = c1; j <= c2; j++) res.push_back(v[h1][j]);
            ++h1;
            if(h1 > h2) break;
            for(int i = h1; i <= h2; i++) res.push_back(v[i][c2]);
            --c2;
            if(c2 < c1) break;
            for(int j = c2; j >= c1; j--) res.push_back(v[h2][j]);
            --h2;
            if(h2 < h1) break;
            for(int i = h2; i >= h1; i--) res.push_back(v[i][c1]);
            ++c1;
        }
        cout << res[k - 1];
        cout << "\n";
    }
    return 0;
}
