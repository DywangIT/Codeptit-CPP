#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

struct person
{
    string name, dob;
};

void nhap(person ds[], int N){
    for(int i = 0; i < N; i++) cin >> ds[i].name >> ds[i].dob;
}

bool cmp(const person a, const person b){
    string x = a.dob, y = b.dob;
    string day1, day2, month1, month2, year1, year2;
    day1 = day2 = month1 = month2 = year1 = year2 = "";
    for(int i = 0; i < 10; i++){
        if(i < 2){
            day1 += x[i];
            day2 += y[i];
        }
        else if(i < 5 && i != 2){
            month1 += x[i];
            month2 += y[i];
        }
        else if(i != 5){
            year1 += x[i];
            year2 += y[i];
        }
    }
    if(year1 != year2) return year1 < year2;
    else if(month1 != month2) return month1 < month2;
    return day1 < day2;
}

void sapxep(person ds[], int N){
    sort(ds, ds + N, cmp);
}

void in(person ds[], int N){
    cout << ds[N - 1].name << "\n" << ds[0].name;
}

int main()
{
    FASTER();
    int N; cin >> N;
    struct person ds[N];
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}
