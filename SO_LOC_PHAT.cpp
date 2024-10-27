#include <bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int check = 1;
        while(n > 0){
            int x = n % 10;
            if(x != 8 && x != 6 && x != 0){
                check = 0;
                break;
            }
            n /= 10;
        }
        if(check == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
