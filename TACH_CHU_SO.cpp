#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		sort(s.begin(), s.end());
		int sum = 0;
		int i = 0;
		while(s[i] <= '9'){
			sum += s[i] - '0';
			++i;
		}
		while(i < s.size()){
			cout << s[i];
			++i;
		}
		cout << sum << "\n";
	}
	return 0;
}
