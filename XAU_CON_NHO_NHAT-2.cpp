#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

int result(string A){
    set<char> need;
    for(auto x : A) need.insert(x);
    map<char,int> window;
    int l = 0, r = 0, valid = 0, minlen = INT_MAX;
    while(r < A.size()){
        char c = A[r];
        ++r;
        if(need.count(c)){
            ++window[c];
            if(window[c] == 1) ++valid;
        }
        while(valid == need.size()){
            if(r - l < minlen) minlen = r - l;
            char d = A[l];
            ++l;
            if(need.count(d)){
                --window[d];
                if(window[d] == 0) --valid;
            }
        }
    }
    return minlen;
}

int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        string A; cin >> A;
        cout << result(A) << '\n';
    }
    return 0;
}
