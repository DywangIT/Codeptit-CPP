#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
// dywang
typedef long long ll;

void pt(ll n)
{
    ll max = 0;
    for(ll i = 2; i * i <= n; i++){
        while(n % i == 0){
            if(i > max) max = i;
            n /= i;
        }
    }
    if(n > max) max = n;
    cout << max << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        pt(n);
    }
    return 0;
}
