#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

int ok;
void lucky_number(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if(sum == 9) ok = 1;
	else if(sum > 9) lucky_number(sum);
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >>t;
	while(t--){
		string s; cin >>s;
		int sum = 0;
		for(int i = 0; i < s.size(); i++) sum += s[i] - '0';
		if(sum == 9) cout << 1;
		else{
			ok = 0;
			lucky_number(sum);
			cout << ok;
		}
		cout << "\n";
	}
	return 0;
}
