#include<bits/stdc++.h>
using namespace std;
//dywang
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string n;
        cin >> n;
        int s = 0;
        for(int i = n.size() - 2; i >= 0; i -= 2){
            s += (n[i] - '0') * 10 + n[i + 1] - '0';
        }
        if(n.size() % 2 != 0) s += n[0] - '0';
        if(s % 11 == 0) cout << "1" << endl;
        else cout << "0" << endl;

    }
    return 0;
}
