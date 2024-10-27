#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //



int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<ll, ll>> toado;
        for(int i = 0; i < n; i++){
            ll x, y;
            cin >> x >> y;
            toado.push_back({x, y});
        }
        ll sum = 0;
        for(int i = 0; i < n - 1; i++){
            sum += toado[i].first * toado[i + 1].second - toado[i].second * toado[i + 1].first;
        }
        sum += toado[n - 1].first * toado[0].second - toado[0].first * toado[n - 1].second;
        double res = (double)abs(sum) / 2;
        cout << fixed << setprecision(3) << res << "\n";
    }
    return 0;
}
