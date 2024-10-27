#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //



int main()
{
	FASTER();
	string s;
	cin >> s;
	int A = 0, B = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'A') B = min(A, B) + 1;
		else A = min(A, B) + 1;
	}
	cout << A;
	return 0;
}
