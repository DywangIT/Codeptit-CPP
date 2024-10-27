#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //



int main()
{
	FASTER();
	int n; cin >> n;
	for(int i = 1; i < n; i++){
		for(int j = 1; j <= 2*n - 1; j++){
			if(j == n + 1 - i || j == n + i - 1) cout << '*';
			else cout << ' ';
		}
		cout << "\n";
	}
	for(int i = 0; i < n; i++) cout << "* ";
	return 0;
}
