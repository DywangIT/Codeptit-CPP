#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //



int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n, p;
        cin >> n >> p;
        int x = 0;
        for(int i = 2; i <= n; i++){
            int tmp = i;
            while(tmp % p == 0){
                ++x;
                tmp /= p;
            }
        }
        cout << x << "\n";
    }
    return 0;
}
