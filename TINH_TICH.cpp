#include<bits/stdc++.h>
using namespace std;
// dywang
int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        int minb = 1e9, maxa = -1e9;
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            if(x > maxa) maxa = x;
        }
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x < minb) minb = x;
        }
        cout << (long long)maxa * minb << endl;
    }
    return 0;
}
