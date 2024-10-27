#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

/*
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
    while(t--){
       int n;
       cin >> n;
       int a[n];
       for(int i = 0; i < n; i++) cin >> a[i];
       int sonho = a[0];
       int hieumax = -1e9;
       int check = 0;
       for(int i = 1; i < n; i++){
            if(a[i] > sonho){
                hieumax = max(hieumax, a[i] - sonho);
                check = 1;
            }
            sonho = min(sonho, a[i]);
       }
       if(check == 0) cout << -1 << endl;
       else
            cout << hieumax << endl;
    }
    return 0;
}











