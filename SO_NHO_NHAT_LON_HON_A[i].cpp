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
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        vector<int> finded = v;
        sort(finded.begin(), finded.end());
        for(int i = 0; i < n; i++){
            auto it = upper_bound(finded.begin(), finded.end(), v[i]);
            if(it == finded.end()) cout << "_" << " ";
            else cout << *it << " ";
        }
        cout << "\n";
    }
    return 0;   
}
