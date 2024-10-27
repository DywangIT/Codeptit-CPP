#include <bits/stdc++.h>

using namespace std;
// dywang

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s, word, tmp;
    int n; cin >> n;
    cin.ignore();
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        ++mp[s];
    }
    cout << mp.size();

    return 0;
}
