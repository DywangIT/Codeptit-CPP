#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

struct PhanSo
{
    ll a, b;
};

void nhap(PhanSo &p)
{
    cin >> p.a >> p.b;
}

void rutgon(PhanSo &p)
{
    ll div = __gcd(p.a, p.b);
    p.a /= div;
    p.b /= div;
}

void in(PhanSo p)
{
    cout << p.a << "/" << p.b;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}











