#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

struct NhanVien
{
    string id, name, sex, dob, add, maso, signday;
};

int i = 0;

void nhap(NhanVien &x){
        if(i < 9) x.id = "0000" + to_string(i + 1);
        else x.id = "000" + to_string(i + 1);
        cin.ignore();
        getline(cin, x.name);
        cin >> x.sex >> x.dob;
        cin.ignore();
        getline(cin, x.add);
        cin >> x.maso >> x.signday;
        ++i;
}

bool cmp(const NhanVien a, const NhanVien b){
    string x = a.dob;
    string y = b.dob;
    string day1, day2, month1, month2, year1, year2;
    day1 = day2 = month1 = month2 = year1 = year2 = "";
    for(int i = 0; i < 10; i++){
        if(i < 2){
            day1.push_back(x[i]);
            day2.push_back(y[i]);
        }
        else if(i < 5 && i != 2){
            month1.push_back(x[i]);
            month2.push_back(y[i]);
        }
        else if(i != 5){
            year1.push_back(x[i]);
            year2.push_back(y[i]);
        }
    }
    if(year1 != year2) return year1 < year2;
    else if(day1 != day2) return day1 < day2;
    return month1 < month2;
}

void sapxep(NhanVien ds[], int N){
    stable_sort(ds, ds + N, cmp);
}

void inds(NhanVien ds[], int N){
    for(int i = 0; i < N; i++){
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].sex << " " << ds[i].dob << " " << ds[i].add << " " << ds[i].maso << " " << ds[i].signday << "\n";
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}