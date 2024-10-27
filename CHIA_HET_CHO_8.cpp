#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //

int handle(int k, string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        int n = 0;
        for(int j = i; j <s.size(); j++){
            n = n * 10 + s[j] - '0';
            n %= k;
            if(n == 0) ++cnt;
        }
    }
    return cnt;
}


int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << handle(8, s) - handle(24, s) << "\n";
    }
    return 0;
}
