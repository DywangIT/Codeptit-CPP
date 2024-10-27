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
                getline(in, a.id);
                getline(in, a.name);
                in >> a.clas >> a.mail;
                scanf("\n");
            return in;
        }
        friend ostream& operator << (ostream& out, NhanVien& a){
            out << a.id << " " << a.name << " " << a.clas << " " << a.mail << "\n";
            return out;
        }
};

bool cmp(NhanVien& a, NhanVien& b){
    return a.id < b.id;
}
void sapxep(vector<NhanVien> &ds, int N){
    sort(ds.begin(), ds.end(), cmp);
}

int main(){
    vector<NhanVien> ds;
    NhanVien x;
    while(cin >> x){
        ds.push_back(x);
    }
    sapxep(ds, ds.size());
    for(int i=0;i<ds.size();i++) cout << ds[i];
    return 0;
}