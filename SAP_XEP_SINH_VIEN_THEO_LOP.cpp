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

bool cmp(NhanVien& a, NhanVien& b){
    if(a.clas != b.clas) return a.clas < b.clas;
    return a.id < b.id;
}
void sapxep(NhanVien ds[], int N){
    sort(ds, ds + N, cmp);
}

int main(){
    NhanVien ds[1005];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}