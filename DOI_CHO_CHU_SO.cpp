#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int check = -1, pos;
		for(int i = s.size() - 2; i >= 0; i--){
			if(s[i] > s[i + 1]){
				check = 1;
				pos = i;
				break;
			}
		}
		if(check == -1) cout << -1;
		else{
			int so = pos + 1;
			for(int i = pos + 1; i < s.size(); i++){
				if(s[i] > s[so] && s[i] < s[pos]) so = i;
			}
			swap(s[pos], s[so]);
			cout << s;
		}
		cout << '\n';
	}
	return 0;
}
