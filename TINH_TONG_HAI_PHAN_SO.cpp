#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

// target : muc tieu

struct PhanSo
{
    ll tu, mau;
};

void nhap(PhanSo &target)
{
    cin >> target.tu >> target.mau;
}

void rutgon(PhanSo &target)
{
    ll tmp = __gcd(target.tu, target.mau);
    target.tu /= tmp;
    target.mau /= tmp;
}

PhanSo tong(PhanSo &a, PhanSo &b)
{
    PhanSo c;
    c.tu = a.tu * b.mau + a.mau * b.tu;
    c.mau = a.mau * b.mau;
    rutgon(c);
    return c;
}

void in(PhanSo target)
{
    cout << target.tu << "/" << target.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}











