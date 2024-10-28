#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //

// prefix-sum
int Smain[500][500] = {0};
int Ssub[500][500] = {0};

int main()
{
    FASTER();
    // input
    int n; cin >> n;
    int a[n + 5][n + 5];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || j == 1) Smain[i][j] = a[i][j];
            else Smain[i][j] = Smain[i - 1][j - 1] + a[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = n; j >= 1; j--){
            if(i == 1 || j == n) Ssub[i][j] = a[i][j];
            else Ssub[i][j] = Ssub[i - 1][j + 1] + a[i][j];
        }
    }
    // solve
    ll res = -1e18;
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            int x = i, y = j;
            while(x >= 1 && y >= 1){
                res = max(res, (0ll + Smain[i][j] - Smain[x - 1][y - 1]) - (0ll + Ssub[i][y] - Ssub[x - 1][j + 1]));
                --x; --y;
            }

        }
    }
    cout << res << endl;
    return 0;
}
