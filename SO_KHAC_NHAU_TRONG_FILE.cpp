#include<bits/stdc++.h>
#include<fstream>
using namespace std;
typedef long long ll;
#define N 1000000;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	faster();
	map<int, int> mp;
	int n;
	ifstream infile;
	infile.open("DATA.in");
	while(infile >> n){
		++mp[n];
	}
	for(auto x : mp) cout << x.first << " " << x.second << "\n";
	return 0;
}
