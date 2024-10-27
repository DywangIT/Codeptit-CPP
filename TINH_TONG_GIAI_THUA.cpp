#include <bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;
ll giai_thua(ll n)
{
    if(n == 1) return 1;
    return n * giai_thua(n - 1);
}

int main()
{
    ll n; cin >> n;
    ll s = 0;
    for(int i = 1; i <= n; i++){
        s += giai_thua(i);
    }
    cout << s;
    return 0;
}
