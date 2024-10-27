#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
// dywang
typedef long long ll;

int can_bang(int n)
{
    int c = 0, l = 0;
    while(n > 0){
        int x = n % 10;
        if(x % 2 == 0) ++c;
        else ++l;
        n /= 10;
    }
    if(c == l) return 1;
    return 0;
}

int main()
{
    int n; cin >> n;
    int start = 1;
    while(n > 0){
        start *= 10;
        --n;
    }
    int cnt = 0;
    for(int i = start / 10; i <= start - 1; i++){
        if(can_bang(i)){
            cout << i << " ";
            ++cnt;
        }
        if(cnt == 10){
            cout << endl;
            cnt = 0;
        }
    }
    return 0;
}
