#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

bool cmp(const string a, const string b){
    return a + b > b + a;
}

int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> v(n);
        for(auto &x : v) cin >> x;
        sort(v.begin(), v.end(), cmp);
        for(auto x : v) cout << x;
        cout << "\n";
    }
    return 0;
}
