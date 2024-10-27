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
        int n = 0;
        if(s[s.size() - 1] == '1') n = 1;
        for(int i = s.size() - 2; i >= 0; i -= 4)
            if(s[i] == '1') n += 2;
        for(int i = s.size() - 3; i >= 0; i -= 4){
            if(s[i] == '1') n += 4;
        }
        for(int i = s.size() - 4; i >= 0; i -= 4){
            if(s[i] == '1') n += 8;
        }
        for(int i = s.size() - 5; i >= 0; i -= 4){
            if(s[i] == '1') n += 6;
        }
        if(n % 5 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
