#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

bool cmp(const pair<pair<int, int>, int> a, const pair<pair<int, int>, int> b){
    if(a.first.first !=  b.first.first) return a.first.first < b.first.first;
    else if(a.first.second != b.first.second) return a.first.second < b.first.second;
    return a.second < b.second;
}

int main()
{
    FASTER();
    int n; cin >> n;
    vector<pair<pair<int, int>, int>> v;
    for(int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        v.push_back({{x, y}, z});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v){
        cout << x.first.first << " " << x.first.second << " " << x.second << "\n";
    }
    return 0;
}
