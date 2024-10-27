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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        vector<ll> a(n1), b(n2), c(n3);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;
        int i, j, k;
        i = j = k = 0;
        vector<ll> res;
        while(i < n1 && j < n2 && k < n3){
            if(a[i] == b[j] && b[j] == c[k]){
                res.push_back(a[i]);
                ++i; ++j; ++k;
            }
            else if(a[i] < c[k]) ++i;
            else if(b[j] < c[k]) ++j;
            else ++k;
        }
        if(res.size()){
            for(auto x : res) cout << x << " ";
        }
        else cout << -1;
        cout << "\n";
    }
    return 0;
}
