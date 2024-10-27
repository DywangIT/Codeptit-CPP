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
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        vector<int> inc(n);
        vector<int> dec(n);
        inc[0] = 1;
        for(int i = 1; i < n; i++){
            int tmp = 0;
            for(int j = 0; j < i; j++){
                if(v[j] < v[i]) tmp = max(tmp, inc[j]);
            }
            inc[i] = tmp + 1;
        }
        dec[n - 1] = 1;
        for(int i = n - 2; i >= 0; i--){
            int tmp = 0;
            for(int j = i + 1; j < n; j++){
                if(v[j] < v[i]) tmp = max(tmp, dec[j]);
            }
            dec[i] = tmp + 1;
        }
        int res = 0;
        for(int i = 0; i < n; i++){
            res = max(res, inc[i] + dec[i] - 1);
        }
        cout << res << "\n";
    }
    return 0;
}
