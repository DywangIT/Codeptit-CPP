#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

// target : muc tieu

struct NhanVien
{
    string msv, name, sex, dob, address, taxid, date;
};

void nhap(NhanVien &target)
{
    target.msv = "00001";
    getline(cin, target.name);
    getline(cin, target.sex);
    getline(cin, target.dob);
    getline(cin, target.address);
    getline(cin, target.taxid);
    getline(cin, target.date);
}

void in(NhanVien target)
{
    cout << target.msv << " " << target.name << " " << target.sex << " " << target.dob << " " << target.address << " " << target.taxid << " " << target.date;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}











