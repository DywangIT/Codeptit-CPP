#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

struct SinhVien{
    string name, clas, dob;
    double gpa;
};

void nhap(SinhVien ds[], int N){
    for(int i = 0; i < N; i++){
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].clas >> ds[i].dob;
        cin >> ds[i].gpa;
    }
}

void in(SinhVien ds[], int N){
    for(int i = 0; i < N; i++){
        cout << "B20DCCN";
        if(i < 9) cout << "00" << i + 1;
        else cout << 0 << i + 1;
        cout << " ";
        cout << ds[i].name << " " << ds[i].clas << " ";
        string s = ds[i].dob;
        if(s[1] == '/') s = '0' + s;
        if(s[4] == '/') s.insert(s.begin() + 3, '0');
        cout << s << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << "\n";
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}