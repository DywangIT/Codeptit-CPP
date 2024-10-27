#include <bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

int TN(ll n)
{
    ll s = 0, luu = n;
    while(n > 0){
        s = s * 10 + n % 10;
        n /= 10;
    }
    if(luu == s) return 1;
    return 0;
}

int main()
{
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(TN(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
