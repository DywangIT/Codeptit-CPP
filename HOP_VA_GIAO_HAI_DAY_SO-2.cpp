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
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        for(int i = 0; i < m + n; i++){
            int x; cin >> x;
            ++mp[x];
        }
        for(auto x : mp){
            cout << x.first << "  ";
        }
        cout << "\n";
        for(auto x : mp){
            if(x.second >= 2) cout << x.first << "  ";
        }
        cout << "\n";
    }
    return 0;
}
