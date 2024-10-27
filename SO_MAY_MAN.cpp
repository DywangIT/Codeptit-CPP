#include <bits/stdc++.h>
#include <iomanip>
#include <math.h>
using namespace std;
// dywang
typedef long long ll;



int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x = n % 10;
        n /= 10;
        if(x == 6 && n % 10 == 8) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}
