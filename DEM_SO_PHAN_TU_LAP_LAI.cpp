#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        map<int, int> mp;
        int n; cin >> n;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            ++mp[a];
        }
        for(auto x : mp){
            if(x.second > 1) cnt += x.second;
        }
        cout << cnt << endl;
    }
    return 0;
}
