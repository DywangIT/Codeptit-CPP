#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
#define N 100000

string chuanhoa(string s){
	for(char &x : s) x = tolower(x);
	return s;
}

int main(){
	faster();
	ifstream infile1;
	ifstream infile2;
	infile1.open("DATA1.in");
	infile2.open("DATA2.in");
	set<string> se;
	map<string, int> mp;
	string s;
	while(infile1 >> s){
		s = chuanhoa(s);
		se.insert(s);
		mp[s] = 1;
	}
	while(infile2 >> s){
		s = chuanhoa(s);
		se.insert(s);
		if(mp[s]) ++mp[s];
		
	}
	for(auto x : se){
		cout << x << " ";
	}
	cout << "\n";
	for(auto x : mp){
		if(x.second > 1) cout << x.first << " ";
	}
	return 0;
}
