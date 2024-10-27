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
        ll a[n];
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] != 0) ++cnt;
        }
        for(int i = 0; i < n; i++){
            if(a[i] != 0) cout << a[i] << " ";
        }
        for(int i = 1; i <= n - cnt; i++) cout << "0 ";
        cout << endl;
    }
    return 0;
}
