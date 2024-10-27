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
        int n; cin >> n;
        vector<ll> v(n);
        for(auto &x : v) cin >> x;
        vector<ll> sum(n, 0);
        sum[0] = v[0];
        ll res = v[0];
        for(int i = 1; i < n; i++){
            ll tmp = 0;
            for(int j = 0; j < i; j++){
                if(v[j] < v[i]) tmp = max(tmp, sum[j]);
            }
            sum[i] = tmp + v[i];
            res = max(res, sum[i]);
        }
        cout << res << "\n";
    }
    return 0;
}
