#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int k; cin >> k;
		int cnt = 0;
		for(int i = 0; i < s.size(); i++){
			set<char> se;
			for(int j = i; j < s.size(); j++){
				se.insert(s[j]);
				if(se.size() == k) ++cnt;
				if(se.size() > k) break;
			}	
		}
		cout << cnt << "\n";
	}
	return 0;
}
