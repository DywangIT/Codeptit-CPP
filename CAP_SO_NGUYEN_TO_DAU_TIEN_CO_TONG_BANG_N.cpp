#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;

int nt(int n)
{
    if(n == 2 || n == 3) return 1;
    if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
    for(int i = 5; i <= sqrt(n); i+= 6){
        if( n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int check = 0;
        for(int i = 2; i <= n / 2; i++){
            if(nt(i) && nt(n - i)){
                cout << i << " " << n - i;
                check = 1;
                break;
            }
        }
        if(!check) cout << "-1";
        cout << endl;
    }
    return 0;
}
