#include <bits/stdc++.h>

using namespace std;
// dywang
typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int a, m;
        cin >> a >> m;
        int check = 0;
        for(int i = 1; i <= m - 1; i++){
            if(a * i % m == 1){
                cout << i;
                check = 1;
                break;
            }
        }
        if(check == 0) cout << "-1";
        cout << endl;
    }
    return 0;
}
