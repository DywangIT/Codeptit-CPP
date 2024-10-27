#include <bits/stdc++.h>
#include <iomanip>
#include <math.h>
using namespace std;
// dywang
typedef long long ll;

ll bcnn(ll a, ll b)
{
    ll s = a * b;
    ll phandu = 0;
    while(b != 0){
        phandu = a % b;
        a = b;
        b = phandu;
    }
    return s / a;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll s = 1;
        for(int i = n; i > n / 2; i--){
            s = bcnn(s,i);
        }
        cout << s << endl;
    }
    return 0;
}
