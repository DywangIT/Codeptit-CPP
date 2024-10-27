#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

struct  PhanSo
{
    ll tu, mau;
};


ll __gcd(ll a, ll b){
    while(b != 0){
        ll tmp = a % b;
        a = b; 
        b = tmp;
    }
    return a;
}

void rutgon(ll &a, ll &b){
    ll tmp = __gcd(a, b);
    a /= tmp;
    b /= tmp;
}

void process(PhanSo A, PhanSo B){
    ll a = A.tu, b = A.mau, x = B.tu, y = B.mau;
    ll tu = a * y + b * x;
    ll mau = b * y;
    rutgon(tu, mau);
    cout << tu * tu << '/' << mau * mau << " ";
    ll tu1 = a * x * tu * tu;
    ll mau1 = b * y * mau * mau;
    rutgon(tu1, mau1);
    cout << tu1 << '/' << mau1 << "\n";
}
int main() {
	ll t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}


