#include <bits/stdc++.h>
#include <iomanip>
#include <math.h>
using namespace std;
// dywang
typedef long long ll;

int gcd(int a, int b)
{
    while(a != b){
        if(a > b) a -= b;
        else b -= a;
    }
    return a;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int ucln = gcd(a,b);
        ll bcnn = (ll)a * b / ucln;
        cout << bcnn << " " << ucln << endl;
    }
    return 0;
}
