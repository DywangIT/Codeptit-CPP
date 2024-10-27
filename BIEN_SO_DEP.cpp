#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //
// 29T1–123.45
//......567.910
bool bienso(string s){
	if((s[6] > s[5]) && (s[7] > s[6]) && (s[9] > s[7]) && (s[10] > s[9])) return true;

	if(s[5] == s[6] && s[6] == s[7] && s[9] == s[10]) return true;

	if((s[5] == '6' || s[5] == '8') && (s[6] == '6' || s[6] == '8') && (s[7] == '6' || s[7] == '8') && (s[9] == '6' || s[9] == '8') && (s[10] == '6' || s[10] == '8')) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(bienso(s)) cout << "YES";
		else cout << "NO";
		cout << "\n";
	}
	return 0;
}
