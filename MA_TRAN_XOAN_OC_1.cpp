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
		int h, c;
		cin >> h >> c;
		int a[h][c];
		for(int i = 0; i < h; i++){
			for(int j = 0; j < c; j++) cin >> a[i][j];
		}
		int h1 = 0, h2 = h - 1, c1 = 0, c2 = c - 1;
		while(h1 <= h2 && c1 <= c2){
			if(h1 == h2){
				for(int j = c1; j <= c2; j++) cout << a[h1][j] << " ";
				break;
			}
			else if(c1 == c2){
				for(int i = h1; i <= h2; i++) cout << a[i][c1] << " ";
				break;
			}
			for(int j = c1; j <= c2; j++) cout << a[h1][j] << " ";
			for(int i = h1 + 1; i <= h2; i++) cout << a[i][c2] << " ";
			for(int j = c2 - 1; j >= c1; j--) cout << a[h2][j] << " ";
			for(int i = h2 - 1; i > h1; i--) cout << a[i][c1] << " ";
			++h1; --h2; ++c1; --c2;
		}
		cout << '\n';
	}
	return 0;
}
