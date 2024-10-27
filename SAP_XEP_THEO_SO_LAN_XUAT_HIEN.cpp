#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

int cmp(const pair<int, int> a, const pair<int, int> b){
    if(a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        map<int, int> quantity;
        for(auto &x : v){
            cin >> x;
            ++quantity[x];
        }
        vector<pair<int, int>> res;
        for(auto x : quantity){
            res.push_back({x.first, x.second});
        }
        sort(res.begin(), res.end(), cmp);
        for(auto x : res){
            while(x.second > 0){
                cout << x.first << " ";
                --x.second;
            }
        }
        cout << endl;   
    }
    return 0;
}
