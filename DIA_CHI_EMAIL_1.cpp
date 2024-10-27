#include<bits/stdc++.h>
using namespace std;
// dywang
int main()
{
    string s;
    getline(cin, s);
    for(char &x : s) x = tolower(x);
    stringstream ss(s);
    string tmp[100];
    int cnt = 0;
    while(ss >> tmp[cnt]){
        ++cnt;
    }
    cout << tmp[cnt -1];
    for(int i = 0; i < cnt - 1; i++) cout << tmp[i][0];
    cout << "@ptit.edu.vn";
    return 0;
}
