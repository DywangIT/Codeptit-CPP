#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n; 
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cin >> a[i][j];
	}
	int m; cin >> m;
	int b[m][m];
	for(int i = 0; i < m ;i++){
		for(int j = 0; j < m; j++) cin >> b[i][j];
	}
	for(int x = 0; x < m; x++){
		for(int y = 0; y < m; y++){
			for(int i = x; i < n; i+=m){
				for(int j = y; j < n; j+=m) a[i][j] *= b[x][y];
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cout << a[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
