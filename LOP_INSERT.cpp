#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
#define N 100000

int main(){
	faster();
	ifstream infile;
	infile.open("DATA.in");
	int n, m, A[1005] = {}, B[1005] = {};
	infile >> n >> m;
	for(int i = 0; i < n; i++){
		int x; infile >> x;
		++A[x];
	}
	for(int i = 0; i < m; i++){
		int x; infile >> x;
		++B[x];
	}
	for(int i = 0; i <= 1000; i++){
		if(A[i] && B[i]) cout << i << " ";
	}
	return 0;
}
