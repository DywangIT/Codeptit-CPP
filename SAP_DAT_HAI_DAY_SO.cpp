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
        int n, m; cin >> n >> m;
        vector<int> A(n), B(m);
        set<int> ptuB;
        map<int, int> luong;
        for(auto &x : A) cin >> x;
        for(auto &x : B){
            cin >> x;
            ptuB.insert(x);
        }
        vector<int> phu;
        sort(A.begin(), A.end());
        for(auto x : A){
            if(ptuB.find(x) != ptuB.end()) ++luong[x];
            else phu.push_back(x);
        }
        for(int i = 0; i < m; i++){
            while(luong[B[i]] > 0){
                cout << B[i] << " ";
                --luong[B[i]];
            }
        }
        for(auto x : phu) cout << x << " ";
        cout << "\n";
    }
 
    return 0;
}
