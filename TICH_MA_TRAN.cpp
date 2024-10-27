#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int m, n, p;
    cin >> m >> n >> p;
    int a[m][n], b[n][p];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++) cin >> b[i][j];
    }
    int c[m][p] = {};
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            for(int k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++) cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}
