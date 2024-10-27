#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

int check(string s){
	int a[30] = {0};
	int maxnum = 0;
	for(auto x : s){
		++a[x - 'a'];
		maxnum = max(maxnum, a[x - 'a']);
	}
	if(maxnum > floor(s.size() + 1) / 2) return 0;
	return 1;

}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s;
		cin >>s;
		cout << check(s) << '\n';
	}
	return 0;
}
