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
        int n; cin >> n;
        vector<int> v(n);
        vector<int> small;
        vector<int> big;
        for(auto &r : v) cin >> r;
        int k, x;
        cin >> k >> x;
        int index = lower_bound(v.begin(), v.end(), x) - v.begin();
        int tmp = index;
        int cnt = 0;
        while(cnt < k / 2){
            --tmp;
            small.push_back(v[tmp]);
            ++cnt;
        }
        int cnt1 = 0;
        while(cnt1 < k / 2){
            ++index;
            big.push_back(v[index]);
            ++cnt1;
        }
        reverse(small.begin(), small.end());
        for(auto m : small) cout << m << " ";
        for(auto m : big) cout << m << " ";
        cout << "\n";
    }
    return 0;
}
