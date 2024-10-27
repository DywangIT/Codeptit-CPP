#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //
int n, k;
int X[30];

void print(){
	for(int i = 1; i <= k; i++) cout << X[i]; cout << " ";
}

void backtrack(int i){
	for(int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k) print();
		else backtrack(i + 1);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		backtrack(1);
		cout << '\n';
	}
	return 0;
}
