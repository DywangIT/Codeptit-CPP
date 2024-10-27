#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

struct SinhVien
{
    int id;
    string msv, name, clas, email, business;
};

void nhap(SinhVien ds[], int N){
    cin.ignore();
    for(int i = 0; i < N; i++){
        ds[i].id = i + 1;
        getline(cin, ds[i].msv);
        getline(cin, ds[i].name);
        getline(cin, ds[i].clas);
        getline(cin, ds[i].email);
        getline(cin, ds[i].business);
    }
}

bool cmp(const SinhVien &a, const SinhVien &b){
    return a.name < b.name;
}

void sapxep(SinhVien ds[], int N){
    sort(ds, ds + N, cmp);
}

void in(SinhVien x){
    cout << x.id << " " << x.msv << " " << x.name << " " << x.clas << " " << x.email << " " << x.business << "\n";
}
    
int main()
{
    FASTER();
    int N; cin >> N;
    struct SinhVien ds[N];
    nhap(ds, N);
    sapxep(ds, N);
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        string s; cin >> s;
        for(int j = 0; j < N; j++){
            if(ds[j].business == s) in(ds[j]);
        }
    }
    return 0;
}
