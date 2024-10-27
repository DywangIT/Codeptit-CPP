#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cnt = 1;

class SinhVien {
    public:
        string name, clas, dob, id;
        double gpa;

        void chuanhoaten() {
            stringstream ss(name);
            string w, b = "";
            while (ss >> w) {
                for (auto &x : w) x = tolower(x); 
                w[0] = toupper(w[0]); 
                b += w + " ";
            }
            if (!b.empty()) b.pop_back();
            name = b;
        }

        friend istream& operator >> (istream& in, SinhVien& a) {
            scanf("\n");
            getline(in, a.name);
            in >> a.clas >> a.dob >> a.gpa;
            a.chuanhoaten();
            if (a.dob[1] == '/') a.dob = "0" + a.dob;
            if (a.dob[4] == '/') a.dob.insert(3, "0");
            
            a.id = "B20DCCN";
            if (cnt < 10) a.id += "00" + to_string(cnt);
            else a.id += "0" + to_string(cnt);
            ++cnt;
            return in;
        }

        friend ostream& operator << (ostream& out, const SinhVien& a) {
            out << a.id << " " << a.name << " " << a.clas << " " << a.dob << " ";
            out << fixed << setprecision(2) << a.gpa << "\n";
            return out;
        }
};

int cmp(const SinhVien& a, const SinhVien& b) {
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}