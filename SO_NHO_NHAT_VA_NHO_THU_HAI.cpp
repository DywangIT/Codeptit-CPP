#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            s.insert(x);
        }
        int m = s.size();
        int cnt = 0, a[m];
        for(auto x : s){
            a[cnt] = x;
            ++cnt;
        }
        if(m == 1) cout << "-1" << endl;
        else cout << a[0] << " " << a[1] << endl;
    }
    return 0;
}
