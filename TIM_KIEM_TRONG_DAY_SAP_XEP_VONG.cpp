#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int check = 0, index = 0;
        for(int i = 1; i <= n; i++){
            int m; cin >> m;
            if(m == x && check == 0){
                index = i;
                check = 1;
            }
        }
        cout << index << endl;
    }
    return 0;
}
