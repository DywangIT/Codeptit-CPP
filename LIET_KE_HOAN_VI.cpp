#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

int n; 
int visited[21] = {};
int X[21];

void print(){
	for(int i = 1; i <= n; i++) cout << X[i]; cout << " ";
}

void backtrack(int i){
	for(int j = 1; j <= n; j++){
		if(!visited[j]){
			X[i] = j;
			visited[j] = 1;
			if(i == n) print();
			else backtrack(i + 1);
			visited[j] = 0;
		}
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
