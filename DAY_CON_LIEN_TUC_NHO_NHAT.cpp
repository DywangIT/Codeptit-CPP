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
        int n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for(auto &x : v) cin >> x;
        int l = 0, r = 0, dmin = INT_MAX;
        ll sum = 0;
        while(r < n){
            sum += v[r];
            while(l <= r && sum > x){
                dmin = min(dmin, r - l + 1);
                sum -= v[l];
                ++l;
            }
            ++r;
        }
        if(dmin == INT_MAX) cout << -1 << "\n";
        else cout << dmin << "\n";
    }
    return 0;
}
