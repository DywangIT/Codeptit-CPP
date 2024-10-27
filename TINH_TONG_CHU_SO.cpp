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
        while(n >= 10){
            int sum = 0;
            while(n > 0){
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }
        cout << n << endl;
    }
    return 0;
}
