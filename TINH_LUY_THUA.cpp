#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

int powmod(int x, int y, int p){
    ll res = 1;
    for(int i = 1; i <= y; i++){
        res *= x;
        res %= p;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int x, y, p;
        cin >> x >> y >> p;
        cout << powmod(x, y, p);
        cout << '\n';
    }
    return 0;
}
