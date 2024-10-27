#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

int nt(int n)
{
    if(n == 2 || n == 3) return 1;
    if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
    for(int i = 5; i <= sqrt(n); i+=6){
        if(n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            if(i == 1) cout << 1 << " ";
            else if(nt(i)) cout << i << " ";
            else if(i % 2 == 0) cout << 2 << " ";
            else{
                for(int j = 2; j <= sqrt(i); j++){
                    if(nt(j) && i % j == 0){
                        cout << j << " ";
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
