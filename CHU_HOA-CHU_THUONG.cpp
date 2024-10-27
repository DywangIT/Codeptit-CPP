#include <bits/stdc++.h>
using namespace std;
// dywang
int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--){
        char a;
        cin >> a;
        if(a >= 'a' && a <= 'z') a -= 32;
        else a += 32;
        cout << a << endl;
    }
}
