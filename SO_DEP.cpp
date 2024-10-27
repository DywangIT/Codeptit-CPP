#include <bits/stdc++.h>

using namespace std;
// dywang

int check(string s)
{
    int l = 0, r = s.size() - 1;
    int check = 1;
    while(l < r){
        if(s[l] != s[r] || s[l] % 2 != 0){
            check = 0;
            break;
        }
        ++l; --r;
    }
    if(check) return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(check(s)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
