#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int m; cin >> m;
            ++mp[m];
        }
        if(mp[x] == 0) cout << -1 << endl;
        else
        cout << mp[x] << endl;
    }
    return 0;
}
