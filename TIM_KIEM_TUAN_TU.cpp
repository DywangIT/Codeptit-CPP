#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;
int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int check = 0, index = -1;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x == k && check == 0){
                index = i + 1;
                check = 1;
            }
        }
        cout << index << endl;
    }
    return 0;
}
