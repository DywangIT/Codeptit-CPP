#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int ok = 1;
		string s; cin >> s;
		set<char> se;
		for(int i = 0; i < s.size(); i++){
			if(s[0] == '0'){
				ok = 0;
				break;
			}
			if(s[i] >= '0' && s[i] <= '9') se.insert(s[i]);
			else{
				ok = 0;
				break;
			}
		}
		if(ok){
			if(se.size() == 10) cout << "YES";
			else cout << "NO";
		}
		else cout << "INVALID";
		cout << "\n";
	}
	return 0;
}
