#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

ll dao(ll n){
	ll sum = 0;
	while(n > 0){
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return sum;
}

ll min_num(ll a){
	ll sum = 0;
	ll cnt = 1, tmp = a;
	while(tmp % 10 == 0){
		cnt *= 10;
		tmp /= 10;
	}
	while(a > 0){
		ll x = a % 10;
		if(x == 6) x = 5;
		sum = sum * 10 + x;
		a /= 10;
	}
	return dao(sum) * cnt;
}

ll max_num(ll a){
	ll sum = 0;
	ll cnt = 1, tmp = a;
	while(tmp % 10 == 0){
		cnt *= 10;
		tmp /= 10;
	}
	while(a > 0){
		ll x = a % 10;
		if(x == 5) x = 6;
		sum = sum * 10 + x;
		a /= 10;
	}
	return dao(sum) * cnt;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin>> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		cout << min_num(a) + min_num(b) << " " << max_num(a) + max_num(b) << '\n';
		// cout << min_num(1000) << " " << max_num(1000);
	}
	// cout << min_num(10000000000);
	return 0;
}
