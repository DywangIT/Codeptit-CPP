#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

vector<int> v(100005);

ll solve(int n){
    ll dp[100005] = {};
    if(n == 1) return v[0];
    if(n == 2) return max(v[0], v[1]);
    dp[1] = v[0];
    dp[2] = max(v[0],v[1]);
    for(int i = 3; i <= n; i++){
        dp[i] = max(dp[i - 1], dp[i - 2] + v[i - 1]);
    }
    return dp[n];
}


int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> v[i];
        cout << solve(n) << "\n";
    }
    return 0;
}
