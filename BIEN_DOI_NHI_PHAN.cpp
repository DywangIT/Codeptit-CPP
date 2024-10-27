#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int m, n; cin >> m >> n;
        int a[m][n];
        int hang[m * n], cot[m * n], cnt = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                if(a[i][j] == 1){
                    hang[cnt] = i;
                    cot[cnt] = j;
                    ++cnt;
                }
            }
        }
        for(int i = 0; i < cnt; i++){
            for(int j = 0; j < n; j++) a[hang[i]][j] = 1;
            for(int j = 0; j < m; j++) a[j][cot[i]] = 1;
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++) cout << a[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}
