#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

struct SinhVien
{
    string id, name, clas, dob;
    double gpa;
};

string chuanhoaten(string s){
    for(int i = 0; i < s.size(); i++){
        if(i == 0) s[i] = toupper(s[i]);
        else if(s[i - 1] == ' ') s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
    return s;
}

string chuanhoangaysinh(string s){
    if(s[1] == '/') s = '0' + s;
    if(s[4] == '/') s.insert(s.begin() + 3, '0');
    return s;
}

void nhap(SinhVien ds[], int N){
    for(int i = 0; i < N; i++){
        if(i < 9) ds[i].id = "00" + to_string(i + 1);
        else ds[i].id = "0" + to_string(i + 1);
        cin.ignore();
        getline(cin, ds[i]. name);
        ds[i].name = chuanhoaten(ds[i].name);
        cin >> ds[i].clas >> ds[i].dob >> ds[i].gpa;
        ds[i].dob =  chuanhoangaysinh(ds[i].dob);
    }
}

bool cmp(const SinhVien a, const SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int N){
    sort(ds, ds + N, cmp);
}

void in(SinhVien ds[], int N){
    for(int i = 0; i < N; i++){
        cout << "B20DCCN" << ds[i].id << " " << ds[i].name << " " << ds[i].clas << " " << ds[i].dob << " " << fixed << setprecision(2) << ds[i].gpa << "\n";
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
