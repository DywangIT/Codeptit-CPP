#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //



int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll Sn = (n + 1) * n / 2;
        ll x = (Sn + m) / 2;
        ll y = (Sn - m) / 2;
        if(__gcd(x, y) == 1 && (Sn + m) % 2 == 0) cout << "Yes";
        else cout << "No";
        cout << "\n";
    }
    return 0;
}
