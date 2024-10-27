#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //



int main()
{
	FASTER();
	int t; cin >> t;
	while(t--){
		int n; cin >> n; 
		vector<int> v(n);
		for(auto &x : v) cin >> x;
		prev_permutation(v.begin(), v.end());
		for(auto x : v) cout << x << " ";
		cout << "\n";
	}
	return 0;
}
