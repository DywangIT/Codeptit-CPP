#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //
#define MOD 1000000007


int main()
{
    FASTER();
    vector<ll> fibo;
    fibo.push_back(0);
    fibo.push_back(1);
    for(int i = 2; i < 1005; i++) fibo.push_back((fibo[i - 1] + fibo[i - 2]) % MOD);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << fibo[n] << "\n";
    }
    return 0;
}
