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
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int min = 1e9;
        for(int i = 1; i < n; i++){
            if(a[i] - a[i - 1] < min) min = a[i] - a[i -1];
        }
        cout << min << endl;
    }
    return 0;
}
