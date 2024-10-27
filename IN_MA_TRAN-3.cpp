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
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) cin >> a[i][j];
        }
        for(int i = 0; i < m + n - 1; i++){
            if(i % 2 == 0){
                for(int j = 0; j <= i && j < m; j++){
                    if(i - j < n) cout << a[i - j][j] << " ";
                }
            }
            else {
                for(int j = 0; j <= i && j < n; j++){
                    if(i - j < m) cout << a[j][i - j] << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
