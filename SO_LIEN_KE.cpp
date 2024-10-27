#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
// dywang
typedef long long ll;

int check(ll n)
{
    int x = n % 10;
    n /= 10;
    int check0 = 1;
    while(n > 0){
        int m = n % 10;
        if(m != x + 1 && x != m + 1){
            check0 = 0;
            break;
        }
        x = n % 10;
        n /= 10;
    }
    if(check0) return 1;
    return 0;
}

int main()
{
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(check(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
