#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //
#define MOD 1000000007;

ll __gcd(ll a, ll b){
    while(b != 0){
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
    
int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v(n);
        ll tich = 1;
        for(auto &x : v){
            cin >> x;
            tich = tich * x % MOD;
        }
        ll usc = v[0];
        for(auto x : v) usc = __gcd(usc, x);
        ll res = 1;
        for(int i = 0; i < usc; i++){
            res = (res * tich) % MOD;
        }
        cout << res << "\n";
    }
    return 0;
}
