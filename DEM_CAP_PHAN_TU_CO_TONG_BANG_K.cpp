#include<bits/stdc++.h>
using namespace std;
// dywang
int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int cnt = 0;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                int x = a[i] + a[j];
                if(x == k) ++cnt;
                else if(x > k) break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
