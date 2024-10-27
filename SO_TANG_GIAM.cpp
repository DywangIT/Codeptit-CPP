#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

/* sang nguyen to
bool nt[100005];
void sieve()
{
    memset(nt, true, sizeof(nt));
    nt[0] = nt[1] = false;
    for(int i = 2; i <= 1000; i++){
        if(nt[i]){
            for(int j = i * i; j <= 100000; j += i){
                nt[j] = false;
            }
        }
    }
}
*/
int nt(int n)
{
    if(n == 2 || n == 3) return 1;
    if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
    for(int i = 5; i <= sqrt(n); i += 6){
        if(n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int check(int n)
{
    int t = 1, g = 1;
    int cnt = 1;
    while(n > 9){
        int x = n % 10;
        n /= 10;
        if(x > n % 10) ++t;
        if(x < n % 10) ++g;
        ++cnt;
    }
    if(t == cnt || g == cnt) return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int start_num = pow(10, n - 1);
        int end_num = pow(10, n) - 1;
        int cnt = 0;
        for(int i = start_num; i <= end_num; i ++){
            if(check(i) && nt(i)) ++cnt;
        }
        cout << cnt << endl;
    }
    return 0;
}











