#include <bits/stdc++.h>

using namespace std;
// dywang

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s, word, tmp;
    getline(cin, s);
    cin >> word;
    stringstream ss(s);
    while(ss >> tmp){
        if(tmp != word) cout << tmp << " ";
    }
    return 0;
}
