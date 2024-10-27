#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;
int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> s;
        int minimum = 1e9, maximum = -1e9;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            minimum = min(minimum, x);
            maximum = max(maximum, x);
            s.insert(x);
        }
        cout << maximum - minimum + 1 - s.size() << endl;
    }
    return 0;
}
