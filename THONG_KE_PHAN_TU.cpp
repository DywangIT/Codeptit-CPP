#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //



int main()
{
    FASTER();
    vector<int> v;
    map<int, int> mp;
    int n;
    while(cin >> n){
        if(mp[n] == 0){
            v.push_back(n);
        }
        ++mp[n];
    }
    for(auto x : v){
        cout << x << " " << mp[x] << "\n";
    }
    return 0;
}
