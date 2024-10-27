#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //
int cnt = 1;
class NhanVien{
    string name, gender, dob, add, tax, day, id;
    public:
        friend istream& operator >> (istream& in, NhanVien& a){
            scanf("\n");
            getline(in, a.name);
            in >> a.gender >> a.dob;
            in.ignore();
            getline(in, a.add);
            in >> a.tax >> a.day;
            a.id = "000";
            if(cnt < 10) a.id += '0' + to_string(cnt);
            else a.id += to_string(cnt);
            ++cnt;
            return in;
        }
        friend ostream& operator << (ostream& out, NhanVien& a){
            out << a.id << " " << a.name << " " << a.gender << " " << a.dob << " " << a.add << " " << a.tax << " " << a.day << "\n";
            return out;
        }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}