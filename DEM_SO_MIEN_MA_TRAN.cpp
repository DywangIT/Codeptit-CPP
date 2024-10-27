#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

bool visited[105][105];
int h, c, cnt;
int a[105][105];
int di[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dj[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

void enter(){
	cin >> h >> c;
	for(int i = 0; i < h; i++){
		for(int j = 0; j < c; j++) cin >> a[i][j];
	}
}

void creat_data(){
	for(int i = 0; i < 105; i++){
		for(int j = 0; j < 105; j++) visited[i][j] = false;
	}
	cnt = 0;
}

void dfs(int i, int j){
	visited[i][j] = true;
	for(int k = 0; k < 9; k++){
		int i1 = i + di[k];
		int j1 = j + dj[k];
		if(i1 >= 0 && i1 <= h && j1 >= 0 && j1 <= c && a[i1][j1] == 1 && !visited[i1][j1]) dfs(i1, j1);
	}
}

void solve(){
	for(int i = 0; i < h; i++){
		for(int j = 0; j < c; j++){
			if(a[i][j] == 1 && !visited[i][j]){
				++cnt;
				dfs(i, j);
			}
		}
	}
}

void print_result(){
	cout << cnt << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		enter();
		creat_data();
		solve();
		print_result();
	}
	return 0;
}
