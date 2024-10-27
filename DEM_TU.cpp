#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int cnt = 0;
        string tmp;
        stringstream ss(s);
        while(ss >> tmp){
            ++cnt;
        }
        cout << cnt << endl;
    }
    return 0;
}
