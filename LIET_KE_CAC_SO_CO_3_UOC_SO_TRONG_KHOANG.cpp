#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

vector<bool> isprime(1000006);
void sieve(){
    fill(isprime.begin(), isprime.end(), true);
    isprime[0] = isprime[1] = false;
    for(int i = 2; i * i < 1000006; i++){
        if(isprime[i]){
            for(int j = i * i; j < 1000006; j+=i) isprime[j] = false;
        }
    }
}
vector<ll> v;
void make(){
    for(int i = 0; i < 1000006; i++)
        if(isprime[i]) v.push_back(i);
}
ll solve(ll l, ll r){
    if(l > r){
        ll tmp = l;
        l = r;
        r = tmp;
    }
    ll cnt = 0;
    for(auto x : v){
        if(x * x >= l && x * x <= r) ++cnt;
        if(x * x > r) break;
    }
    return cnt;
}

int main()
{
    FASTER();
    sieve();
    make();
    int t; cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;
        cout << solve(l, r) << "\n";
    }

    return 0;
}
