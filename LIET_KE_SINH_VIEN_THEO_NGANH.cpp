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
    cin.ignore();
    for(int i = 0; i < q; i++){
        string lop;
        cout << "DANH SACH SINH VIEN NGANH ";

        getline(cin, lop);
        if(lop == "Ke toan"){
            cout << "KE TOAN:\n";
            for(int i = 0; i < N; i++){
                if(ds[i].id[5] == 'K' && ds[i].id[6] == 'T') cout << ds[i];
            }
        }
        else if(lop == "Cong nghe thong tin"){
            cout << "CONG NGHE THONG TIN:\n";
            for(int i = 0; i < N; i++){
                if(ds[i].id[5] == 'C' && ds[i].id[6] == 'N' && ds[i].clas[0] != 'E') cout << ds[i];
            }
        }
        else if(lop == "An toan thong tin"){
            cout << "AN TOAN THONG TIN:\n";
            for(int i = 0; i < N; i++){
                if(ds[i].id[5] == 'A' && ds[i].id[6] == 'T' && ds[i].clas[0] != 'E') cout << ds[i];
            }
        }
        else if(lop == "Vien thong"){
            cout << "VIEN THONG:\n";
            for(int i = 0; i < N; i++){
                if(ds[i].id[5] == 'V' && ds[i].id[6] == 'T') cout << ds[i];
            }
        }
        else if(lop == "Dien tu"){
            cout << "DIEN TU:\n";
            for(int i = 0; i < N; i++){
                if(ds[i].id[5] == 'D' && ds[i].id[6] == 'T') cout << ds[i];
            }
        }
    }
    return 0;
}