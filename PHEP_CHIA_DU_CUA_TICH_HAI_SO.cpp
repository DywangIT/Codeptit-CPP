#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //

ll multiply(ll x, ll y, ll mod){
    x %= mod; y %= mod;
    ll res = 0;
    while(y > 0){
        if(y & 1) res = (res + x) % mod;
        x = (x * 2) % mod;
        y /= 2;
    }
    return res;
}

ll pow_mod(ll a, ll b, ll c){
    ll res = 1;
    a %= c;
    while(b > 0){
        if(b & 1) res = multiply(res, a, c);
        a = multiply(a, a, c);
        b /= 2;
    }
    return res;
}

int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
        cout << multiply(a, b, c) << "\n";
    }
    return 0;
}
