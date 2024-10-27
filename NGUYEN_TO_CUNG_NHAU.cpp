#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;


// sang nguyen to
bool nt[1000005];
void sieve()
{
    memset(nt, true, sizeof(nt));
    nt[0] = nt[1] = false;
    for(int i = 2; i <= 1000; i++){
        if(nt[i]){
            for(int j = i * i; j <= 1000000; j += i) nt[j] = false;
        }
    }
}
/*
// mang fibo
ll fibo[93];
void fi()
{
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i < 93; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
*/

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    sieve();
    while(t--){
        int x; cin >> x;
        int cnt = 0;
        if(nt[x]){
            if(nt[x - 1]) cout << 1;
            else cout << 0;
        }
        else{
            for(int i = 1; i <= x - 1; i++){
                if(__gcd(i, x) == 1) ++cnt;
            }
            if(nt[cnt]) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}











