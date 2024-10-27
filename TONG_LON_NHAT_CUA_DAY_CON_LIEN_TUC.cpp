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
        ll res = -LLONG_MAX;
        ll s = 0;
        for(int i = 0; i < n; i++){
            s += v[i];
            res = max(res, s);
            if(s <= 0) s = 0;
        }
        cout << res << "\n";
    }
    return 0;
}
