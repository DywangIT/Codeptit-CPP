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
        int a[n - 1];
        for(int i = 0; i < n - 1; i++) cin >> a[i];
        sort(a, a + n - 1);
        for(int i = 0; i < n - 1; i++){
            if(a[i] != i + a[0]){
                cout << i + a[0] << endl;
                break;
            }
        }
    }
    return 0;
}
