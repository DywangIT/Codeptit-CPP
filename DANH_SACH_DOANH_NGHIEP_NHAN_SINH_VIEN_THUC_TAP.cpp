#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
// dywang //

class business {
public:
    string id, name;
    int number;
    friend istream& operator >> (istream& in, business& a){
        getline(in, a.id);
        getline(in, a.name);
        // getline(in, a.number);
        in >> a.number;
        in.ignore();
        return in;
    }
    friend ostream& operator << (ostream& out, business& a){
        out << a.id << " " << a.name << " " << a.number << "\n";
        return out;
    }
};

bool cmp(business &a, business &b){
    if(a.number != b.number) return a.number > b.number;
    return a.id < b.id;
}

int main(){
    faster();
    int N; cin >> N; cin.ignore();
    business ds[N];
    for(int i = 0; i < N; i++) cin >> ds[i];
    sort(ds, ds + N, cmp);
    for(auto x : ds) cout << x;
    return 0;
}