#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string a, b;
		getline(cin, a);
		getline(cin, b);
		string a1[201], b1[201];
		stringstream s1(a);
		stringstream s2(b);
		string tmp;
		int cnt = 0, cnt1 = 0;
		while(s1 >> tmp){
			a1[cnt] = tmp;
			++cnt;
		}
		while(s2 >> tmp){
			b1[cnt1] = tmp;
			++cnt1;
		}
		sort(a1, a1 + cnt1);
		// for(int i = 0; i < cnt; i++) cout << a1[i] << " ";
		// cout << '\n';
		// for(int i = 0;i < cnt1; i++) cout << b1[i] << " ";
		int x[201] = {};
		for(int i = 0; i < cnt; i++){
			if(x[i] == 0){
				for(int j = i + 1; j < cnt; j++){
					if(a1[i] == a1[j]) x[j] = 1;
				}
				int check = 0;
				for(int j = 0; j < cnt1; j++){
					if(a1[i] == b1[j]){
						check = 1;
						break;
					}
				}
				if(check == 0) cout << a1[i] <<  " ";
			}
		}
		cout << '\n';
	}
	return 0;
}
