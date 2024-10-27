#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;
int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int m, n; cin >> m >> n;
        int a[m + n];
        for(int i = 0; i < m + n; i++) cin >> a[i];
        sort(a, a + m + n);
        for(int i = 0; i < m + n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
