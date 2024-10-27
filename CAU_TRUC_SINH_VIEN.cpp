#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

// target : muc tieu

struct SinhVien
{
    string msv;
    string name, cla, dob;
    float gpa;
};

void nhap(SinhVien &target)
{
    target.msv = "B20DCCN001";
    getline(cin, target.name);
    getline(cin, target.cla);
    getline(cin, target.dob);
    cin >> target.gpa;
    if(target.dob[1] == '/') target.dob = "0" + target.dob;
    if(target.dob[4] == '/') target.dob.insert(3, "0");
}

void in(SinhVien target)
{
    cout << target.msv << " " << target.name << " " << target.cla << " " << target.dob << " ";
    cout << fixed << setprecision(2) << target.gpa;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}











