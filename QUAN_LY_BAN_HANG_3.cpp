#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //

class KH {
    public: 
    int code;
    string name, gender, birth, address;
};

class MH {
    public:
    int code;
    string name, unit;
    ll pur, sell;
};

map<int, KH> mkh;
map<int, MH> mmh;

string strip(string s)
{
    stringstream ss(s);
    string tok, result = "";
    while (ss >> tok)
    {
        result += tok;
        result += " ";
    }
    return result.erase(result.length() - 1);
}

void get_KH(){
    ifstream in("KH.in");
    int n; in >> n;
    for(int i = 1; i <= n; i++) {
        int code = i;
        string name, gender, birth, address;
        getline(in >> ws, name);
        getline(in >> ws, gender);
        getline(in >> ws, birth);
        getline(in >> ws, address);
        mkh[i] = {code, strip(name), strip(gender), strip(birth), strip(address)};
    }
}

void get_MH() {
    ifstream in("MH.in");
    int n; in >> n;
    for(int i = 1; i <= n; i++){
        int code = i;
        string name, unit;
        ll pur, sell;
        getline(in >> ws, name);
        getline(in >> ws, unit);
        in >> pur >> sell;
        mmh[i] = {code, strip(name), strip(unit), pur, sell};
    }
}

void show_HD() {
    ifstream in("HD.in");
    int n; in >> n;
    for(int i = 1; i <= n; i++){
        string code_kh, code_mh;
        int quanity;
        in >> code_kh >> code_mh >> quanity;
        int sttkh = stoi(&code_kh[2]);
        int sttmh = stoi(&code_mh[2]);
        cout << "HD" << setfill('0') << setw(3) << i << " ";
        cout << mkh[sttkh].name << " ";
        cout << mkh[sttkh].address << " ";
        cout << mmh[sttmh].name << " ";
        cout << mmh[sttmh].unit << " ";
        cout << mmh[sttmh].pur << " ";
        cout << mmh[sttmh].sell << " ";
        cout << quanity << " ";
        cout << mmh[sttmh].sell * quanity << endl;
    }
}

int main()
{
    FASTER();
    get_KH();
    get_MH();
    show_HD();
    return 0;
}
