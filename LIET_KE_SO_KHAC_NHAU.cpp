#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    //sort(a, a + n);
    set<int> s;
    for(int i = 0; i < n; i++) s.insert(a[i]);
    for(int x : s) cout << x << " ";
    return 0;
}
