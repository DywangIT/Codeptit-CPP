#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;
int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<ll, int> mp;
        for(int i = 0; i < n; i++){
            ll x; cin >> x;
            ++mp[x];
        }
        for(int i = 0; i < n; i++){
            if(mp[i] != 0) cout << i << " ";
            else cout << "-1 ";
        }
        cout << endl;
    }
    return 0;
}
