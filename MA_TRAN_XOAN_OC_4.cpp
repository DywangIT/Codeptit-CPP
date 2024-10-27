#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n; 
	int a[n * n];
	for(auto &x : a) cin >> x;
	sort(a, a + n * n);
	int cnt = 0, x[25][25];
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	while(h1 <= h2 && c1 <= c2){
		if(h1 == h2){
			x[h1][c1] = a[n * n - 1];
			break;
		}
		for(int i = c1; i <= c2; i++){
			x[h1][i] = a[cnt];
			++cnt;
		}
		for(int i = h1 + 1; i <= h2; i++){
			x[i][c2] = a[cnt];
			++cnt;
		}
		for(int i = c2 - 1; i >= c1; i--){
			x[h2][i] = a[cnt];
			++cnt;
		}
		for(int i = h2 - 1; i > h1; i--){
			x[i][c1] = a[cnt];
			++cnt;
		}
		++h1; ++c1; --h2; --c2;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cout << x[i][j] << " ";
		cout << '\n';
	}
	return 0;
}
