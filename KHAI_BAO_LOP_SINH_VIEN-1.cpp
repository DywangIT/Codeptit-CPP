#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

class SinhVien {
    public: 
        string name, clas, dob;
        double gpa;
        void nhap();
        void xuat();
};

void SinhVien::nhap(){
    getline(cin, name);
    cin >> clas >> dob;
    if(dob[1] == '/') dob = '0' + dob;
    if(dob[4] == '/') dob.insert(dob.begin() + 3, '0');
    cin >> gpa;
}

void SinhVien::xuat(){
    cout << "B20DCCN001" << " " << name << " " << clas << " " << dob << " " << fixed << setprecision(2) << gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
