#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

ll a[93];

void fibo()
{
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i < 93; i++){
        a[i] = a[i -1] + a[i - 2];
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        fibo();
        cout << a[n] << endl;
    }
    return 0;
}
