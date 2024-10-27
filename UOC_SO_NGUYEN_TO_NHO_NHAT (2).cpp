#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

// sang nguyen to
bool nt[1000005];
void sieve()
{
    memset(nt, true, sizeof(nt));
    nt[0] = nt[1] = false;
    for(int i = 2; i <= 1000; i++){
        if(nt[i]){
            for(int j = i * i; j <= 1000000; j += i) nt[j] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    sieve();
    while(t--){
        int n; cin >> n;
        cout << 1 << " ";
        for(int i = 2; i <= n; i++){
            if(nt[i]) cout << i << " ";
            else{
                for(int j = 2; j <= sqrt(i); j++){
                    if(i % j == 0){
                        cout << j << " ";
                        break;
                    }
                }
            }

        }
        cout << endl;
    }

    return 0;
}











