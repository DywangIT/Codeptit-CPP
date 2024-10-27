#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //

int cnt = 1;

class giangvien{
    public:
    string id, name, nganh, tmp;
    friend istream& operator >> (istream& in, giangvien& a){
        a.id = "GV";
        if(cnt < 10) a.id += "0" + to_string(cnt);
        else a.id += to_string(cnt);
        ++cnt;
        getline(in, a.name);
        getline(in, a.tmp);
        a.nganh = toupper(a.tmp[0]);
        for(int i = 1; i < a.tmp.size(); i++){
            if(a.tmp[i - 1] == ' ') a.nganh += toupper(a.tmp[i]);
        }
        return in;
    }
    friend ostream& operator << (ostream& out, giangvien& a){
        out << a.id << " " << a.name << " " << a.nganh << "\n";
        return out;
    }
};

int main()
{
    FASTER();
    giangvien ds[1005];
    int N; cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i++) cin >> ds[i];
    int Q; cin >> Q;
    cin.ignore();
    for(int i = 0; i < Q; i++){
        cout << "DANH SACH GIANG VIEN BO MON ";
        string subject;
        getline(cin, subject);
        string s = "";
        s += subject[0];
        for(int j = 1; j < subject.size(); j++){
            if(subject[j - 1] == ' ') s += toupper(subject[j]);
        }
        cout << s << ":\n";
        for(int j = 0; j < N; j++){
            if(ds[j].nganh == s){
                cout << ds[j];
            }
        }
    }
    return 0;
}
