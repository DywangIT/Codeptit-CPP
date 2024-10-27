#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

bool isprime(ll n){
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(ll i = 5; i * i <= n; i+=6){
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}


vector<ll> FindPerfectNumber(){
    vector<ll> PerfectNumbers;
    for(ll i = 2; i < 32; i++){
        ll tmp = (1ll << i) - 1;

        if(isprime(tmp)) PerfectNumbers.push_back((1ll << (i - 1)) * tmp);
    }
    return PerfectNumbers;
}

int check(ll n, vector<ll> v){
    for(auto x : v){
        if(x == n) return 1;
    }
    return 0;
}

int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> PerfectNumbers = FindPerfectNumber();
        cout << check(n, PerfectNumbers) << "\n";
    }
    return 0;
}
