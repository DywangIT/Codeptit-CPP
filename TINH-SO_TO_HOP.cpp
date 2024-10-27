#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //
#define MOD 1000000007


int main()
{
    FASTER();
    vector<vector<ll>> C(1005, vector<ll>(1005, 0));
    for(int i = 0; i < 1005; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0) C[i][j] = 1;
            else C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % MOD; 
        }
    }
    int t; cin >> t;
    while(t--){
        int n, r;
        cin >> n >> r;
        cout << C[n][r] << "\n";
    }
    return 0;
}
