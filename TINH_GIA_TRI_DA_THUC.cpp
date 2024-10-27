#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //
#define MOD 1000000007;

ll Pow(ll a, ll b){
	ll ans = 1;
	while(b > 0){
		if(b % 2) ans = (ans * a) % MOD;
		a = a * a % MOD;
		b /= 2;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		ll n, x;
		cin >> n >> x;
		ll a[n];
		for(auto &p : a) cin >> p;
		ll res = 0;
		for(int i = 0; i < n; i++){
			ll tmp = a[i] % MOD;
			res += (tmp * Pow(x, n - i - 1)) % MOD;
			res %= MOD;
		}
		cout << res << '\n';
	}
	return 0;
}
