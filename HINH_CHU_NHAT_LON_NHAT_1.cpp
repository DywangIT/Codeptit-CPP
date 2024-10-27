#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		// input
		int h, c;
		cin >> h >> c;
		vector<vector<int>> v(h);
		for(int i = 0; i < h; i++)
			for(int j = 0; j < c; j++)
			{
				int x; cin >> x;
				v[i].push_back(x);
			}
				
		
		// cộng dồn
		for(int j = 0; j < c; j++){
			for(int i = 1; i < h; i++){
				if(v[i][j]) v[i][j] +=v[i - 1][j];
			}
		}

		// sort
		for(int i = 0; i < h; i++){
			sort(v[i].begin(), v[i].end());
		}

		int s = 0;

		for(int i = 0; i < h; i++){
			for(int j = 0; j < c; j++){
				s = max(s, v[i][j] * (c - j));
			}
		}

		cout << s << "\n";
	}
	return 0;
}
