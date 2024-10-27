#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

class NhanVien {
    string name, gender, dob, address, tax, signday;
    public: 
        friend istream& operator >> (istream &in, NhanVien &x){
            getline(in, x.name);
            getline(in, x.gender);
            getline(in, x.dob);
            getline(in, x.address);
            getline(in, x.tax);
            getline(in, x.signday);
            return in;
        }
        friend ostream& operator >> (ostream &out, NhanVien &x){
            out << "00001" << " " << x.name << " " << x.gender << " " << x.dob << " " << x.address << " " << x.tax << " " << x.signday;
            return out;
        }
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}
