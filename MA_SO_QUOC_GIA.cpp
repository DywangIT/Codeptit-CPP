#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
// dywang
typedef long long ll;



int main()
{
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        int a[20];
        int cnt = 0;
        while(n > 0){
            a[cnt] = n % 10;
            n /= 10;
            ++cnt;
        }

        ll m = 0;
        for(int i = cnt - 1; i >= 0; i--){
            if(a[i] == 0 && a[i - 1] == 8 && a[i - 2] == 4) i-=3;
            if(i >= 0 ) m = m * 10 + a[i];
        }
        cout << m << endl;

    }
    return 0;
}
