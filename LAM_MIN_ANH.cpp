#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //



int main()
{
	FASTER();
	int t; cin >> t;
	while(t--){
		int n, m, l;
		cin >> n >> m >> l;
		int a[n + 5][m + 5];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++) cin >> a[i][j];
		}
		vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
            }
        }
		for(int i = 1; i <= n - l + 1; i++){
			for(int j = 1; j <= m - l + 1; j++){
				int x2 = i + l - 1;
				int y2 = j + l - 1;
				int sum = prefix[x2][y2] - prefix[i - 1][y2] - prefix[x2][j - 1] + prefix[i - 1][j - 1];
				cout << sum / (l * l) << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
