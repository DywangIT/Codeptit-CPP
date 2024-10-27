#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

string chuanhoa(string &s){
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	return s;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	cin.ignore();
	map<string, int> mp;
	while(t--){
		string s;
		getline(cin, s);
		vector<string> v;
		stringstream ss(s);
		string word;
		while(ss >> word){
			v.push_back(chuanhoa(word));
		}
		string email = "";
		email += v[v.size() - 1];
		for(int i = 0; i < v.size() - 1; i++) email += v[i][0];
		++mp[email];
		cout << email;
		if(mp[email] >= 2) cout << mp[email];
		cout << "@ptit.edu.vn" << "\n";
	}
	return 0;
}
