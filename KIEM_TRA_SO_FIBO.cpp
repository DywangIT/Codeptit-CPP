#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;



int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[93];
        a[0] = 0;
        a[1] = 1;
        if(n == 0 || n == 1) cout << "YES" << endl;
        else{
            for(int i = 2; i < 93; i++){
                a[i] = a[i - 1] + a[i - 2];
                if(a[i] == n){
                    cout << "YES" << endl;
                    break;
                }
                if(a[i] > n){
                    cout << "NO" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
