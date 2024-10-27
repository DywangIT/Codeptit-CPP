#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //
int n; 
int a[21] = {};

void backtrack(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n) {
			for(int k = 1; k <= n; k++) cout << a[k]; cout << " ";
		}
		else backtrack(i + 1);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		cin >> n;
		backtrack(1);
		cout << '\n';
	}
	return 0;
}
