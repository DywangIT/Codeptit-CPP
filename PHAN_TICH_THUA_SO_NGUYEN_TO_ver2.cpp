#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll N = 10000000;
// Dywang //
vector<ll> primes;

void sieve(){
    vector<bool> is_prime(N + 1, true);
    is_prime[0] = is_prime[1] = false;
    for(ll i = 2; i * i <= N; i++){
        if(is_prime[i]){
            for(ll j = i * i; j <= N; j += i) is_prime[j] = false;
        }
    }
    for(ll i = 2; i <= N; i++){
        if(is_prime[i]) primes.push_back(i);
    }
}

void prime_factors(ll n){
    map<ll, ll> factors;
    for(ll x : primes) {
        if(x * x > n) break;
        while(n % x == 0){
            ++factors[x];
            n /= x;
        }
    }
    if(n > 1) ++factors[n];
    for(auto x : factors){
        cout << x.first << " " << x.second << "\n";
    }
}

int main()
{
    FASTER();
    int t; cin >> t;
    sieve();
    while(t--){
        ll n; cin >> n;
        prime_factors(n);
    }
    return 0;
}
