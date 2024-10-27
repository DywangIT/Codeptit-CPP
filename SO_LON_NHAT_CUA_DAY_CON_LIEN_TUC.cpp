#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

vector<int> solve(int n, int k, vector<int> v){
    vector<int> res;
    deque<int> dq;
    for(int i = 0; i < n; i++){
        while(!dq.empty() && v[i] >= v[dq.back()]) dq.pop_back();
        dq.push_back(i);
        while(dq.front() < i - k + 1) dq.pop_front();
        if(i >= k - 1) res.push_back(v[dq.front()]);
    }
    return res;
}

int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        vector<int> res = solve(n, k, v);
        for(auto x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
