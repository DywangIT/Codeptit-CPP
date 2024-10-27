#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        map<char,int> mp;
        for(int i = 0; i < s.length(); i++) ++mp[s[i]];
        for(int i = 0; i < s.length(); i++){
            if(mp[s[i]] == 1){
                cout << s[i];
                mp[s[i]] = 0;
            }
        }
        cout << endl;
    }
    return 0;
}
