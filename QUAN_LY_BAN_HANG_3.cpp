#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const ll N = 10000000;

int cntkh = 1, cntmh = 1, cnthd = 1;
map<string, string> KH, MH;
map<string, int> profit;

class KhachHang
{
public:
    string name, gender, dob, add;
    friend istream &operator>>(istream &in, KhachHang &x)
    {
        getline(in, x.name);
        getline(in, x.gender);
        getline(in, x.dob);
        getline(in, x.add);

        string id = "KH";
        if (cntkh < 10)
            id += "00" + to_string(cntkh);
        else if (cntkh < 100)
            id += "0" + to_string(cntkh);
        else
            id += to_string(cntkh);
        ++cntkh;

        KH[id] = x.name + " " + x.add;
        return in;
    }
};

class MatHang
{
public:
    string name, unit;
    int purchase, sell;
    friend istream &operator>>(istream &in, MatHang &x)
    {
        in.ignore();
        getline(in, x.name);
        getline(in, x.unit);
        in >> x.purchase >> x.sell;

        string id = "MH";
        if (cntmh < 10)
            id += "00" + to_string(cntmh);
        else if (cntmh < 100)
            id += "0" + to_string(cntmh);
        else
            id += to_string(cntmh);
        ++cntmh;

        MH[id] = x.name + " " + x.unit + " " + to_string(x.purchase) + " " + to_string(x.sell);
        profit[id] = x.sell;
        return in;
    }
};

class HoaDon
{
public:
    string kh, mh, id;
    int amount;
    friend istream &operator>>(istream &in, HoaDon &x)
    {
        in >> x.kh >> x.mh >> x.amount;

        x.id = "HD";
        if (cnthd < 10)
            x.id += "00" + to_string(cnthd);
        else if (cnthd < 100)
            x.id += "0" + to_string(cnthd);
        else
            x.id += to_string(cnthd);
        ++cnthd;

        return in;
    }
    friend ostream &operator<<(ostream &out, HoaDon &x)
    {
        out << x.id << " " << KH[x.kh] << " " << MH[x.mh] << " " << x.amount << " " << profit[x.mh] * x.amount << "\n";
        return out;
    }
};

int main()
{
    ifstream inkh("KH.in");
    ifstream inmh("MH.in");
    ifstream inhd("HD.in");

    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;

    inkh >> N;
    inkh.ignore();
    for (i = 0; i < N; i++)
        inkh >> dskh[i];
    inmh >> M;
    for (i = 0; i < M; i++)
        inmh >> dsmh[i];
    inhd >> K;
    for (i = 0; i < K; i++)
        inhd >> dshd[i];

    for (i = 0; i < K; i++)
        cout << dshd[i];
    return 0;
}