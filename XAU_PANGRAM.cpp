#include <bits/stdc++.h>

using namespace std;
// dywang

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int k; cin >> k;
        cin.ignore();
        if(s.size() < 26) cout << "0";
        else{
            map<int, int> mp;
            for(int i = 0; i < s.size(); i++){
                if(s[i] >= 'a' && s[i] <= 'z') ++mp[s[i]];
            }
            if(26 - mp.size() <= k) cout << "1";
            else cout << "0";
        }
        cout << endl;
    }
    return 0;
}
