#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        int a[n + 1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        int prefix[n + 1] = {0};
        for(int i = 1; i <= n; i++){
            prefix[i] = prefix[i - 1] + a[i];
        }
        while(q--){
            int l, r; cin >> l >> r;
            cout << prefix[r] - prefix[l - 1] << endl;
        }
    }
    return 0;
}
