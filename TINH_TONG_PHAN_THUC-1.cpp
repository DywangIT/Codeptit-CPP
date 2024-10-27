#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
// dywang
int main()
{
    int n; cin >> n;
    double s = 0;
    while(n > 0){
        s += 1.0 / n;
        --n;
    }
    cout << fixed << setprecision(4) << s;
}
