#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

class PhanSo{
    ll tu, mau;
	void symplify(){
		ll usc = GCD(tu, mau);
		tu /= usc;
		mau /= usc;
	}
	ll GCD(ll a, ll b){
		while(b != 0){
			ll tmp = a % b;
			a = b;
			b = tmp;
		}
		return a;
	}
    public:
        PhanSo(ll tuso, ll mauso) {
			tu = tuso;
			mau = mauso;
			symplify();
		}
        PhanSo operator+(const PhanSo &other){
			ll new_tu = tu * other.mau + other.tu * mau;
			ll new_mau = mau * other.mau;
			return PhanSo(new_tu, new_mau);
		}
		friend istream& operator >> (istream& in, PhanSo &x){
			in >> x.tu >> x.mau;
			x.symplify();
			return in;
		}
		friend ostream& operator << (ostream& out,const PhanSo &x){
			out << x.tu << "/" << x.mau;
			return out;
		}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
