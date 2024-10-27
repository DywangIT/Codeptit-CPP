#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        for(int i = 2; i <= sqrt(n); i++){
            while(n % i == 0){
                ++cnt;
                if(cnt == k){
                    cout << i;
                    break;
                }
                n /= i;
            }
            if(cnt == k) break;
        }
        if(n != 1){
            if(cnt + 1 == k) cout << n;
            else if(cnt + 1 < k) cout << "-1";
        }
        else{
            if(cnt < k) cout << "-1";
        }
        cout << endl;
    }
    return 0;
}
