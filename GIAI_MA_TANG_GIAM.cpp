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
        string id;
        cin >> id;
        vector<int> res(id.size() + 1, 0);
        int en = 1;
        if(id[0] == 'I'){
            res[0] = 1;
            en = 2;
        }
        for(int i = 1; i < id.size(); i++){
            if(id[i] == 'I'){
                res[i] = en;
                en = i + 2;
            }
        }
        if(id[id.size() - 1] == 'D') res[res.size() - 1] = en;
        else res[res.size() - 1] = res.size();
        for(int i = res.size() - 2; i >= 0; i--){
            if(res[i] == 0) res[i] = res[i + 1] + 1;
        }
        for(auto x : res) cout << x;
        cout << "\n";
    }
    return 0;
}
