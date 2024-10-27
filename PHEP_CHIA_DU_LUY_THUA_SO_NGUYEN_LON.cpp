#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

ll solve(ll a, ll b, ll m){
	ll res = 1;
	while(b > 0){
		if(b % 2 == 1) res = (res * a) % m;
		b /= 2;
		a = (a * a) % m;
	}
	return res;
}

ll mod(string a, ll m){
	ll res = 0;
	for(auto x : a){
		res = (res * 10 + (x - '0')) % m;
	}
	return res;
}

int main()
{
	FASTER();
	int t; cin >> t;
	while(t--){
		string a; 
		ll b,m;
		cin >> a >> b >> m;
		cout << solve(mod(a, m), b, m) << "\n";
	}
	return 0;
}
