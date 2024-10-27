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
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int l[n];
		l[n - 1] = 1;
		int lmax = 0;
		for(int i = n - 2; i >= 0;  i--){
			int tmp = 0;
			for(int j = i + 1; j < n; j++){
				if(l[j] > tmp && a[j] > a[i]) tmp = l[j];
			}
			l[i] = tmp + 1;
			if(l[i] > lmax) lmax = l[i];
		}
		cout << lmax << '\n';
	}
	return 0;
}
