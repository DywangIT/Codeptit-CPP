#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //



int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector<pair<int, int>> v;
        for(int i = 0; i < s.size(); i++){
            int cnt = 1;
            char tmp = s[i];
            while(s[i + 1] == tmp && i + 1 < s.size()){
                ++cnt;
                ++i;
            }
            v.push_back({tmp - '0', cnt});
        }
        int res = 0;
        for(int i = 0; i < s.size() - 1; i++){
            if(v[i].first == 1 && v[i + 1].first == 0 && v[i + 1].second > 1){
                int tmp = 3 * min(v[i].second, v[i + 1].second / 2);
                res = max(res, tmp);
            }
        }
        cout << res << "\n";
    }
    return 0;
}
