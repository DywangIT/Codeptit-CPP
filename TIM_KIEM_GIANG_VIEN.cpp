#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //

int cnt = 1;

class Lecturers{
public:
    string name, bomon, id, BOMON;
    friend istream& operator >> (istream& in, Lecturers& a){
        a.id = "GV";
        if(cnt < 10) a.id += "0" + to_string(cnt);
        else a.id += to_string(cnt);
        getline(in, a.name);
        getline(in, a.bomon);
        a.BOMON = "";
        a.BOMON += a.bomon[0];
        for(int i = 1; i < a.bomon.size(); i++){
            if(a.bomon[i - 1] == ' ') a.BOMON += toupper(a.bomon[i]);
        }
        ++cnt;
        return in;
    }   
    friend ostream& operator << (ostream& out, Lecturers& a){
        out << a.id << " " << a.name << " " << a.BOMON << "\n";
        return out;
    }
};

void search(Lecturers ds[], int N, string keyword){
    cout << "DANH SACH GIANG VIEN THEO TU KHOA " << keyword << ":\n";
    for(auto &x : keyword) x = tolower(x);
    for(int i = 0; i < N; i++){
        string ten = ds[i].name;
        for(auto &x : ten) x = tolower(x);
        size_t pos = ten.find(keyword);
        if(pos != string::npos) cout << ds[i];
    }
}

int main()
{
    FASTER();
    int N; cin >> N;
    cin.ignore();
    Lecturers ds[N];
    for(int i = 0; i < N; i++) cin >> ds[i];
    int Q; cin >> Q;
    for(int i = 0; i < Q; i++){
        string keyword;
        cin >> keyword;
        search(ds, N, keyword);
    }
    return 0;
}
