#include<bits/stdc++.h>
using namespace std;
// dywang
int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int m; cin >> m;
            ++mp[m];
        }
        for(auto x : mp){
            while(x.second > 0){
                cout << x.first << " ";
                --x.second;
            }
        }
        cout << endl;
    }
    return 0;
}
