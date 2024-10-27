#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

struct SinhVien
{
    string id, name, classes, dob;
    float gpa;
};

void nhapThongTinSV(SinhVien &a)
{
    a.id = "N20DCCN001";
    getline(cin, a.name);
    cin >> a.classes >> a.dob >> a.gpa;
    if(a.dob[1] == '/') a.dob = "0" + a.dob;
    if(a.dob[4] == '/') a.dob.insert(3, "0");
}

void inThongTinSV(SinhVien a)
{
    cout << a.id << " " << a.name << " " << a.classes << " " << a.dob << " ";
    cout << fixed << setprecision(2) << a.gpa;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}











