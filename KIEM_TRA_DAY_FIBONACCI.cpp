#include <bits/stdc++.h>
#include <fstream>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

int fibo[18] = {};
int bfibo[1005] = {};
void binary_fibo(){
	fibo[0] = 0;
	fibo[1] = 1;
	bfibo[0] = 1;
	bfibo[1] = 1;
	for(int i = 2; i < 18; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		bfibo[fibo[i]] = 1;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	binary_fibo();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			if(bfibo[a[i]]) cout << a[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
