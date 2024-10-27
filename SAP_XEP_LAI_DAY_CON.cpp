#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //



int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        vector<int> sorted = v;
        sort(sorted.begin(), sorted.end());
        int start_ptr, end_ptr;
        start_ptr = end_ptr = 0;
        for(int i = 0; i < n; i++){
            if(v[i] != sorted[i]){
                start_ptr = i + 1;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--){
            if(v[i] != sorted[i]){
                end_ptr = i + 1;
                break;
            }
        }
        cout << start_ptr << " " << end_ptr << "\n";
    }
    return 0;
}
