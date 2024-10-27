#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

bool tn(string s){
    if(s.size() == 1) return false;
    int l = 0, r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]) return false;
        ++l; --r;
    }
    return true;
}

bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.first.size() == b.first.size()) return a.first < b.first;
    return a.first.size() < b.first.size();
}

int main()
{
    FASTER();
    map<string, int> mp;
    string s;
    while(cin >> s){
        if(tn(s)) ++mp[s];
    }
    vector<pair<string, int>> v;
    for(auto x : mp){
        v.push_back({x.first, x.second});
    }
    sort(v.begin(), v.end(), cmp);

    for(int i = v.size() - 1; i >= 0; i--) cout << v[i].first << " " << v[i].second << "\n";
    return 0;
}
