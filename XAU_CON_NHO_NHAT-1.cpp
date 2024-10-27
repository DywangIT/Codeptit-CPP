#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

string check(string A, string B){
    if(B.size() > A.size()) return "-1";
    map<char, int> need;
    for(auto x : B) ++need[x];
    int l = 0, r = 0, valid = 0, minlen = INT_MAX, start = 0;
    map<char, int> window;
    while(r < A.size()){
        char c = A[r];
        ++r;
        if(need.count(c)){
            ++window[c];
            if(window[c] == need[c]) ++valid;
        }
        while(valid == need.size()){
            if(r - l < minlen){
                minlen = r - l;
                start = l;
            }
            char d = A[l];
            ++l;
            if(need.count(d)){
                if(window[d] == need[d]) --valid;
                --window[d];
            }
        }
    }
    return minlen == INT_MAX ? "-1" : A.substr(start, minlen);
}

int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        string A, B;
        cin >> A >> B;
        cout << check(A, B) << '\n';
    }
    return 0;
}
