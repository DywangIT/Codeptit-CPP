#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

int phim(char c){
	int tmp = c - 'a';
	switch(tmp){
		case 0: case 1: case 2: return 2;
		case 3: case 4: case 5: return 3;
		case 6: case 7: case 8: return 4;
		case 9: case 10: case 11: return 5;
		case 12: case 13: case 14: return 6;
		case 15: case 16: case 17: case 18: return 7;
		case 19: case 20: case 21: return 8;
		case 23: case 24: case 25: return 9;
	}
}

bool tn(vector<char> v){
	int l = 0, r = v.size() - 1;
	while(l <= r){
		if(v[l] != v[r]) return false;
		++l;
		--r;
	}
	return true;
}


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		vector<char> v;
		for(auto x : s) v.push_back(phim(x) + '0');
		if(tn(v)) cout << "YES";
		else cout << "NO";
		cout << "\n";
	}
	return 0;
}
