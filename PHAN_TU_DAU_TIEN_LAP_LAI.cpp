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
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        map<int, int> mp;
        int check = 0;
        for(int i = 0; i < n; i++){
            ++mp[a[i]];
            if(mp[a[i]] == 2){
                check = 1;
                cout << a[i] << endl;
                break;
            }
        }
        if(!check) cout << -1 << endl;
    }
    return 0;
}
