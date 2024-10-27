#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //

ll MAX_MUTIPLY(vector<ll> v, int n){
    ll res = - LLONG_MAX;
    for(int i = 0; i < n; i++){
        ll x = 1;
        for(int j = i; j < n; j++){
            x *= v[j];
            res = max(res, x);
        }
    }
    return res;
}

int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v(n);
        for(auto &x : v) cin >> x;
        cout << MAX_MUTIPLY(v, n) << "\n";
    }
    return 0;
}
