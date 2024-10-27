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

    bool cmp(giangvien& a, giangvien& b){
        string x = a.name, y = b.name, w1, w2;
        stringstream ss(x);
        stringstream sss(y);
        while(ss >> w1);
        while(sss >> w2);
        if(w1 != w2) return w1 < w2;
        return a.id < b.id;
    }

    void sapxep(giangvien ds[], int N){
        sort(ds, ds + N, cmp);
    }

    int main()
    {
        FASTER();
        giangvien ds[1005];
        int N; cin >> N;
        cin.ignore();
        for(int i = 0; i < N; i++) cin >> ds[i];
        sapxep(ds, N);
        for(int i = 0; i < N; i++) cout << ds[i];
        return 0;
    }
