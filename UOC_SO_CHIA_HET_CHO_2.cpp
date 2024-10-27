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
        int cnt = 0;
        for(int i = 1; i <= sqrt(n); i++){
            if(i * i != n && n % i == 0){
                if(i % 2 == 0) ++cnt;
                if((n / i) % 2 == 0) ++cnt;
            }
            else if(i * i == n){
                if(i % 2 == 0) ++cnt;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
