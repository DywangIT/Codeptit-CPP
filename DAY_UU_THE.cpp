#include<bits/stdc++.h>
using namespace std;
// dywang
int main()
{
    int t; cin >> t;
    while(t--){
        int c = 0, l = 0;
        char kitu = ' ';
        while(kitu == ' '){
            int x; cin >> x;
            if(x % 2 == 0) ++c;
            else ++l;
            kitu = cin.get();
        }
        if(c > l && (c + l) % 2 == 0 || c < l && (c + l) % 2 != 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
