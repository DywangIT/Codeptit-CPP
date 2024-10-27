#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

ll du(string n, ll m){
	ll res = 0;
	for(auto x : n){
		res = (res * 10 + x - '0') % m;
	}
	return res;
}


int main()
{
	FASTER();
	int t; cin >> t;
	while(t--){
		string n; cin >> n;
		ll m; cin >> m;
		cout << du(n, m) << "\n";
	}
	return 0;
}
