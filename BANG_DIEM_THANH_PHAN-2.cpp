#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

struct SinhVien
{
    string id, name, clas;
    double A, B, C;
};

void nhap(SinhVien &x){
    cin.ignore();
    getline(cin, x.id);
    getline(cin, x.name);
    cin >> x.clas >> x.A >> x.B >> x.C;
}

bool cmp(const SinhVien a, const SinhVien b){
    // string x = a.id, y = b.id;
    // string id1 = "", id2 = "";
    // for(int i = 9; i >= 0; i--){
    //     id1 = x[i] + id1;
    //     id2 = y[i] + id2;
    // }
    // return id1 < id2;
    return a.name < b.name;
}

void sap_xep(SinhVien ds[], int n){
    sort(ds, ds + n, cmp);
}

void in_ds(SinhVien ds[], int n){
    for(int i = 0; i < n; i++){
        cout << i + 1 << " " << ds[i].id << " " << ds[i].name << " " << ds[i].clas << " ";
        cout << fixed << setprecision(1) << ds[i].A << " ";
        cout << fixed << setprecision(1) << ds[i].B << " ";
        cout << fixed << setprecision(1) << ds[i].C << "\n";
    }
}


int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}