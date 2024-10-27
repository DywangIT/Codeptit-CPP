#include<bits/stdc++.h>
#include<fstream>
using namespace std;
typedef long long ll;
#define N 1000000;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool cmp(string a, string b){
	if(a.size() > b.size()) return true;
	if(a.size() < b.size()) return false;
	return a >= b;
}

int main(){
	faster();
	string s;
	string lim = to_string(INT_MAX);
	ifstream infile;
	infile.open("DATA.in");
	ll res = 0;
	while(getline(infile, s)){
		for(int i = 0; i < s.size(); i++){
			string tmp = "";
			while(s[i] >= '0' && s[i] <= '9' && i < s.size()){
				tmp += s[i];
				++i;
			}
			if(!tmp.empty() && cmp(lim, tmp)) res += stoll(tmp);
		}
	}
	cout << res;

	return 0;
}
