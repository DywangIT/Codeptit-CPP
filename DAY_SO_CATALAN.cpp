#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //
const int MAXN = 2e5 + 5;
int marked[MAXN], res[MAXN], len;

void mark(int n, int delta){
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            marked[i] += delta;
            n /= i;
        }
    }
    if(n > 1) marked[n] += delta;
}

void mul(int n){
    len += 5;
    for(int i = 0; i < len; i++) res[i] *= n;
    for(int i = 0; i < len; i++){
        res[i + 1] += res[i] / 10;
        res[i] %= 10;
    }
    while(len > 0 && !res[len - 1]) --len;
}

int main()
{
    FASTER();
    int n; cin >> n;
    ++n;
    for(int i = 1; i <= n; i++)
        mark(2 * n - i + 1, 1);
    for(int i = 1; i <= n + 1; i++) 
        mark(i, -1);
    res[0] = len = 1;
    for(int i = 1; i < MAXN; i++)
        while(marked[i]--) mul(i);
    for(int i = len - 1; i >= 0; i--) cout << res[i];
    cout << endl;
    return 0;
}
