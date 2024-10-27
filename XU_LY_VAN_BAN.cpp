#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

string strlwr(string s){
    for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
    return s;
}

int main()
{
    FASTER();
    vector<string> v;
    string s;
    while(cin >> s){
        v.push_back(strlwr(s));
    }
    int start = true;
    for(auto &x : v){
        if(start){
            x[0] = toupper(x[0]);
            start = false;
        }
        char y = x[x.size() - 1];
        if(y == '.' || y == '?' || y == '!'){
            x.pop_back();
            start = 1;
        }
        if(start == 0) cout << x << " ";
        else cout << x << "\n";
    }
    return 0;
}
