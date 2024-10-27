#include<bits/stdc++.h>
using namespace std;
// dywang
int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++){
            int m; cin >> m;
            while(m > 0){
                s.insert(m % 10);
                m /= 10;
            }
        }
        for(auto x : s) cout << x << " ";
        cout << endl;
    }
    return 0;
}
