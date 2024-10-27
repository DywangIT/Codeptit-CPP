#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
#define N 100000

string chuanhoa(string s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}

int main(){
	faster();
	string s;
	set<string> se;
	ifstream infile;
	infile.open("VANBAN.in");
	while(infile >> s){
		se.insert(chuanhoa(s));
	}
	for(auto x : se) cout << x << "\n";
	return 0;
}
