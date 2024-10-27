#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int max = -1e9;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > max) max = a[i];
        }
        cout << max << endl;
    }
    return 0;
}
