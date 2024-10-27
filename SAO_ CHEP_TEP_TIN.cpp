#include <bits/stdc++.h>
#include <fstream>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ifstream input ("PTIT.in");
	ofstream output ("PTIT.out");
	// viết trong đây
	string s;
	while(getline(input, s)) output << s << endl;
	input.close();
	output.close();
	return 0;
}
