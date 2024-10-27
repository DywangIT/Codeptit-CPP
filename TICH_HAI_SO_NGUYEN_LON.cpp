#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string multiplystrings(string a, string b) {
    int len1 = a.size();
    int len2 = b.size();

    vector<int> res(len1 + len2, 0);

    for(int i = len1 - 1; i >= 0; i--){
        for(int j = len2 - 1; j >= 0; j--){
            int mul = (a[i] - '0') * (b[j] - '0');
            int sum = mul + res[i + j + 1];
            res[i + j + 1] = sum % 10;
            res[i + j] += sum / 10;
        }
    }

    while(res.size() > 1 && res[0] == 0) res.erase(res.begin());

    string ans = "";
    for(auto x : res) ans += x + '0';
    return ans;
}

int main() {
    FASTER();
    int t; cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << multiplystrings(a, b) << "\n";
        cout << "\n";
    }
    return 0;
}
