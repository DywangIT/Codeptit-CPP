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
        int n, k; cin >> n >> k;
        vector<ll> v(n);
        for(auto &x : v) cin >> x;
        vector<ll> sum;
        sum.push_back(0);
        for(int i = 0; i < n; i++){
            sum.push_back(sum[i] + v[i]);
        }
        ll smax = -LLONG_MAX, start = 0, end = 0;
        for(int i = k; i < sum.size(); i++){
            ll tmp = sum[i] - sum[i - k];
            if(tmp > smax){
                smax = tmp;
                start = i - k;
                end = i;
            }
        }
        for(int i = start; i < end; i++) cout << v[i] << " ";
        cout << "\n";
    }
    return 0;
}
