#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
// dywang
typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        double diem = 0;
        cin.ignore();
        string a = "A B B A D C C A B D C C A B D";
        string b = "A C C A B C D D B B C D D B B";
        string s;
        getline(cin, s);
        if(n == 101){
            for(int i = 0; i < s.length(); i+=2){
                if(s[i] == a[i]) diem += 10.0 / 15;
            }
        }
        else{
            for(int i = 0; i < s.length(); i+=2){
                if(s[i] == b[i]) diem += 10.0 / 15;
            }
        }
        cout << fixed << setprecision(2) << diem << endl;
    }
    return 0;
}
