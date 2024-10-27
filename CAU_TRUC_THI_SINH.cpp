#include<bits/stdc++.h>
using namespace std;
// dywang

struct ThiSinh
{
    string name;
    string dob;
    float score1, score2, score3;
};

void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    getline(cin, A.dob);
    cin >> A.score1 >> A.score2 >> A.score3;
}

void in(ThiSinh A)
{
    cout << A.name << " " << A.dob << " ";
    cout << fixed << setprecision(1) << A.score1 + A.score2 + A.score3;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}











