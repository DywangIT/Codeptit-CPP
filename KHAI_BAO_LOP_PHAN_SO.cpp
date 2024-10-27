#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

class PhanSo {
    private: 
        ll tu, mau;
    public:
        PhanSo(ll tuso, ll mauso){};
        ll gcd(ll a, ll b){
            while(b != 0){
                ll tmp = a % b;
                a = b;
                b = tmp;
            }
            return a;
        }
        void rutgon(){
            ll usc = gcd(tu, mau);
            tu /= usc;
            mau /= usc;
        }
        friend istream& operator >> (istream& in, PhanSo &p){
            in >> p.tu >> p.mau;
            return in;
        }
        friend ostream& operator << (ostream& out, PhanSo &p){
            out << p.tu << "/" << p.mau;
            return out;
        }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
