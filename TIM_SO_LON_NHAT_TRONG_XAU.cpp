#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

bool isdigit(char c){
	if(c >= '0' && c <= '9') return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int max_num = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] <= '9' && s[i] >= '1'){
				string tmp = "";
				tmp += s[i];
				while(isdigit(s[i + 1])){
					tmp += s[i + 1];
					++i;
				}
				max_num = max(max_num, stoi(tmp));
			}
		}
		cout << max_num << "\n";
	}
	return 0;
}
