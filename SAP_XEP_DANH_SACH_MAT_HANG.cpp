#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //


struct MatHang
{
    int id;
    string name, type;
    double profit;
};

void nhap(MatHang ds[], int N){
    for(int i = 0; i < N; i++){
        cin.ignore();
        ds[i].id = i + 1;
        getline(cin, ds[i].name);
        getline(cin, ds[i].type);
        double x, y;
        cin >> x >> y;
        ds[i].profit = y - x;
    }
}

bool cmp(const MatHang a, const MatHang b){
    return a.profit > b.profit;
}

void sapxep(MatHang ds[], int N){
    sort(ds, ds + N, cmp);
}

void in(MatHang ds[], int N){
    for(int i = 0; i < N; i++){
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].type << " " << fixed << setprecision(2) << ds[i].profit << "\n";
    }
}

int main()
{
    FASTER();
    int N; cin >> N;
    MatHang ds[50];
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}
