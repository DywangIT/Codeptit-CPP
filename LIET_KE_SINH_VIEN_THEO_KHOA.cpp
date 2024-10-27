#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //
class NhanVien{
    public: 
    string id, name, clas, mail;
    public:
        friend istream& operator >> (istream& in, NhanVien& a){
                scanf("\n");
                getline(in, a.id);
                getline(in, a.name);
                in >> a.clas >> a.mail;
            return in;
        }
        friend ostream& operator << (ostream& out, NhanVien& a){
            out << a.id << " " << a.name << " " << a.clas << " " << a.mail << "\n";
            return out;
        }
};

int main(){
    NhanVien ds[1005];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        string lop;
        cin >> lop;
        cout << "DANH SACH SINH VIEN KHOA " << lop << ":\n";
        for(int i = 0; i < N; i++){
            if(ds[i].clas[1] == lop[2] && ds[i].clas[2] == lop[3]) cout << ds[i];
        }
    }
    return 0;
}