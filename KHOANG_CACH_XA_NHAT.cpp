#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

int solve(int a[], int n){
    vector<int> Lmin(n), Rmax(n);
    Lmin[0] = a[0];
    for(int i = 1; i < n; i++){
        Lmin[i] = min(a[i], Lmin[i - 1]);
    }
    Rmax[n - 1] = a[n - 1];
    for(int i = n - 2; i >= 0; i--){
        Rmax[i] = max(a[i], Rmax[i + 1]);
    }
    int res = -1, i = 0, j = 0;
    while(i < n && j < n){
        if(Lmin[i] <= Rmax[j]){
            res = max(res, j - i);
            ++j;
        }
        else ++i;
    }
    return res;
}

int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        cout << solve(a, n) << "\n";
    }
    return 0;
}
