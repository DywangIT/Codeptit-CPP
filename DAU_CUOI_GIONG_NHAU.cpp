#include<bits/stdc++.h>
using namespace std;
// dywang
int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if(s.size() == 1) cout << "1" << endl;
        else{
            map<char, int> mp;
            for(auto x : s) ++mp[x];
            int xaucon = 0;
            for(auto x : mp){
                if(x.second >= 2){
                    int y = x.second;
                    xaucon += y * (y - 1) / 2;
                }
            }
            cout << xaucon + s.size() << endl;
        }
    }
    return 0;
}
