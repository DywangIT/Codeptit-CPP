#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

struct SinhVien
{
    string name, clas, dob;
    double gpa;
};

void nhap(SinhVien ds[], int N){
    for(int i = 0; i < N; i++){
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].clas >> ds[i].dob >> ds[i].gpa;
    }
}

void chuanhoaten(string s){
    stringstream ss(s);
    string word;
    while(ss >> word){
        word[0] = toupper(word[0]);
        for(int i = 1; i < word.size(); i++) word[i] = tolower(word[i]);
        cout << word << " ";
    }
}

void in(SinhVien ds[], int N){
    for(int i = 0; i < N; i++){
        cout << "B20DCCN";
        if(i < 9) cout << "00" << i + 1;
        else cout << "0" << i + 1;
        cout << " ";
        chuanhoaten(ds[i].name);
        cout << ds[i].clas << " ";
        string tmp = ds[i].dob;
        if(tmp[1] == '/') tmp = '0' + tmp;
        if(tmp[4] == '/') tmp.insert(tmp.begin() + 3, '0');
        cout << tmp << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << "\n";
    }
}


int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}