#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

int chiahet(int m, int n, int a)
{
    return n / a - (m - 1) / a;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        if(m > n) swap(m, n);
        int bcnn = a * b / __gcd(a, b);

        cout << chiahet(m, n, a) + chiahet(m, n, b) - chiahet(m, n, bcnn) << endl;

    }
    return 0;
}











