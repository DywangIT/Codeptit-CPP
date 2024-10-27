#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //



int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        int dmin = INT_MAX;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j< n; j++){
                int tmp = a[i] + a[j];
                if(abs(tmp) < abs(dmin)) dmin = tmp;
            }
        }
        cout << dmin << "\n";
    }
    return 0;
}
