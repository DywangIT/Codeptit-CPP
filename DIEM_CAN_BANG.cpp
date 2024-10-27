#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int sum = 0, a[n], tmp = 0;
		for(auto &x : a){
			cin >> x;
			sum += x;
		}
		int index = -1;
		for(int i = 0; i < n; i++){
			tmp += a[i];
			if(sum - tmp == tmp - a[i]){
				index = i + 1;
				break;
			} 
		}
		cout << index << '\n';
	}
	return 0;
}