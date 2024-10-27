#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

int check(int n)
{
    int dem = 0;
    for(int i = 2; i <= n; i++){
        int cnt = 0;
        while(n % i == 0){
            ++cnt;
            ++dem;
            n /= i;
        }
        if(cnt > 1 || dem > 3) return 0;
    }
    if(dem == 3) return 1;
    return 0;
}

int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(check(n)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
