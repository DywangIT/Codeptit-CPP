#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //
int cnt = 1;
class NhanVien{
    string name, gender, dob, add, tax, day, id;
    public:
        string d, m, y;
        friend istream& operator >> (istream& in, NhanVien& a){
            scanf("\n");
            getline(in, a.name);
            in >> a.gender >> a.dob;
            a.m = a.dob.substr(0, 2);
            a.d = a.dob.substr(3, 2);
            a.y = a.dob.substr(6, 4);
            in.ignore();
            getline(in, a.add);
            in >> a.tax >> a.day;
            a.id = "000";
            if(cnt < 10) a.id += "0" + to_string(cnt);
            else a.id += to_string(cnt);
            ++cnt;
            return in;
        }
        friend ostream& operator << (ostream& out, NhanVien& a){
            out << a.id << " " << a.name << " " << a.gender << " " << a.dob << " " << a.add << " " << a.tax << " " << a.day << "\n";
            // out << a.d << " " << a.m << " " << a.y << "\n";
            return out;
        }
};

bool cmp(NhanVien &a, NhanVien &b) { if(a.y < b.y) return 1; if(a.y > b.y) return 0; if(a.m < b.m) return 1; if(a.m > b.m) return 0; if(a.d < b.d) return 1; return 0; }

void sapxep(NhanVien ds[], int N){
    sort(ds, ds + N, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}