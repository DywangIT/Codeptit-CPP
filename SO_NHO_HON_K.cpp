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
        int n, k;
        cin >> n >> k;
        int a[n];
        for(auto &x : a) cin >> x;
        vector<int> v;
        v.push_back(0);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(a[i] <= k){
                v.push_back(v[i] + 1);
                ++cnt;
            }
            else v.push_back(v[i]);
        }
        int res = 1e9;
        for(int i = cnt; i < v.size(); i++) res = min(res, cnt - (v[i] - v[i - cnt]));
        cout << res << "\n";
    }
    return 0;
}
