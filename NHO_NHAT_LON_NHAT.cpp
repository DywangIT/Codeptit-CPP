#include<bits/stdc++.h>
using namespace std;
// dywang

vector<int> v;

string minimum(int m, int s)
{
    if(s > m * 9 || s == 0 && m > 1) return "-1";
    v.resize(m);
    s -= 1;
    for(int i = m - 1; i >= 0; i--){
        if(s > 9){
            v[i] = 9;
            s -= 9;
        }
        else{
            v[i] = s;
            s = 0;
        }
    }
    v[0] += 1;
    string tmp = "";
    for(int i = 0; i < m; i++){
        tmp += v[i] + '0';
    }
    return tmp;
}

string maximum(int m, int s)
{
    if(s > m * 9 || s == 0 && m > 1) return "-1";
    v.resize(m);
    for(int i = 0; i < m; i++){
        if(s > 9){
            v[i] = 9;
            s -= 9;
        }
        else{
            v[i] = s;
            s = 0;
        }
    }
    string tmp = "";
    for(int i = 0; i < m; i++){
        tmp += v[i] + '0';
    }
    return tmp;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m, s;
    cin >> m >> s;
    cout << minimum(m, s) << " " << maximum(m, s);
    return 0;
}
