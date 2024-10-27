#include <bits/stdc++.h>
#include <iomanip>
#include <math.h>
using namespace std;
// dywang
typedef long long ll;

int nguyento(int n)
{
    if(n == 2 || n == 3) return 1;
    if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
    for(int i = 5; i * i <= n; i+=6){
        if(n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a > b){
            int c = a;
            a = b;
            b = c;
        }
        for(int i = a; i <= b; i++){
            if(nguyento(i)) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
