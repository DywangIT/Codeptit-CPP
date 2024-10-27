#include<bits/stdc++.h>
using namespace std;
// dywang
typedef long long ll;

// target : muc tieu

struct NhanVien
{
    string id, name, sex, dob, address, taxid, date;
};

void nhap(NhanVien &target)
{
    scanf("\n");
    getline(cin, target.name);
    getline(cin, target.sex);
    getline(cin, target.dob);
    getline(cin, target.address);
    getline(cin, target.taxid);
    getline(cin, target.date);
}

void inds(NhanVien *target, int n)
{
    for(int i = 0; i < n; i++){
        target[i].id = to_string(i + 1);
        if(target[i].id.size() == 1) target[i].id.insert(0, "0000");
        if(target[i].id.size() == 2) target[i].id.insert(0, "000");
        cout << target[i].id << " " << target[i].name << " " << target[i].sex << " " << target[i].dob << " " << target[i].address << " " << target[i].taxid << " " << target[i].date << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds, N);
    return 0;
}











