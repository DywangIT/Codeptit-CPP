#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //


class SinhVien {
    string name, clas, dob;
    double gpa;
    public:
        friend istream& operator >> (istream &in, SinhVien& a);
        friend ostream& operator << (ostream &out, SinhVien& a);
};

istream& operator >> (istream &in, SinhVien& a) {
    getline(in, a.name);
    in >> a.clas >> a.dob >> a.gpa;
    if (a.dob[1] == '/') a.dob = "0" + a.dob;
    if (a.dob[4] == '/') a.dob.insert(3, "0");
    return in;
}


ostream& operator << (ostream &out, SinhVien& a){
    cout << "B20DCCN001" << " " << a.name << " " << a.clas << " " << a.dob << " ";
    cout << fixed << setprecision(2) << a.gpa;
    return out; 
}


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
