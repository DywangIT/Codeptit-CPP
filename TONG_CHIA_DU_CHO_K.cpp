#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll x = n / k;
        ll s = x * (k - 1) * k / 2;
        n -= k * x;
        s += (n + 1) * n / 2;
        if(s == k) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}
