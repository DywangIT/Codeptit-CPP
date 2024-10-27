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
    for(int i = 0; i < cnt - 1; i++){
        tmp[i][0] = toupper(tmp[i][0]);
        cout << tmp[i];
        if(i < cnt - 2) cout << " ";
    }
    for(char &x : tmp[cnt -1]) x = toupper(x);
    cout << ", " << tmp[cnt - 1];
    return 0;
}
