#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n; 
		int a[n], b[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		int lmax = 0;
		for(int i = 0; i < n; i++){
			int asum = 0, bsum = 0;
			for(int j = i; j < n; j++){
				asum += a[j]; 
				bsum += b[j];
				if(asum == bsum) lmax = max(lmax, j - i + 1);
			}
		}
		cout << lmax << "\n";
	}
	return 0;
}
