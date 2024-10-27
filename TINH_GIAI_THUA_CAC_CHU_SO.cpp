#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

string solve(char c){
	int tmp = c - '0';
	switch(tmp){
		case 2: return "2";
		case 3: return "3"; // 2! * 3!
		case 4: return "223"; // 2! * 2! * 3!
		case 5: return "5";
		case 6: return "35"; // 3! * 5!
		case 7: return "7";
		case 8: return "2227";
		case 9: return "2337";
		// Cách tách số thành giai thừa các số là tách số lớn bằng giai thừa các số nhỏ hơn nó theo thứ tự
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string a, res = "";
		cin >> a;
		for(int i = 0; i < a.size(); i++){
			if(a[i] != '0' && a[i] != '1') res += solve(a[i]);
		}
		sort(res.begin(), res.end(), greater<char>());
		cout << res << '\n';
	}
	return 0;
}
