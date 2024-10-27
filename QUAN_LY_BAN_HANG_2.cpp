#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//dywang//

int cnt1 = 1, cnt2 = 1, cnt3 = 1;
map<int, string> mp1, mp2;
map<int, int> gia_mua, gia_ban;

class KhachHang {
    public:
    string cus_name, cus_gender, cus_dob, cus_ad;
    friend istream &operator >> (istream &in, KhachHang &x){
        scanf("\n");
        getline(in, x.cus_name);
        in >> x.cus_gender >> x.cus_dob;
        cin.ignore();
        getline(in, x.cus_ad);
        mp1[cnt1] = x.cus_name + " " + x.cus_ad;
        ++cnt1;
        return in;
    }
};

class MatHang {
    public: 
    string or_name, or_unit;
    int pur_prices, sell_prices;
    friend istream &operator >> (istream &in, MatHang &x){
        scanf("\n");
        getline(in, x.or_name);
        in >> x.or_unit >> x.pur_prices >> x.sell_prices;
        mp2[cnt2] = x.or_name;
        gia_mua[cnt2] = x.pur_prices;
        gia_ban[cnt2] = x.sell_prices;
        ++cnt2;
        return in;
    }
};

int id(string s){
    return stoi(s.substr(2, 4));
}

class HoaDon {
    public: 
    string cus_id, or_id, bill_id;
    int amount, profit;
    friend istream &operator >> (istream &in, HoaDon &x){
        // 
        x.bill_id = "HD";
        if(cnt3 < 10) x.bill_id = x.bill_id + "00" + to_string(cnt3);
        else if(cnt3 < 100) x.bill_id = x.bill_id + "0" + to_string(cnt3);
        else x.bill_id = x.bill_id + to_string(cnt3);
        // 
        in >> x.cus_id >> x.or_id >> x.amount;
        //
        x.profit = x.amount * gia_ban[id(x.or_id)] - gia_mua[id(x.or_id)] * x.amount;
        ++cnt3;
        return in;
    }
    friend ostream &operator << (ostream &out, HoaDon x) {
        out << x.bill_id << " " << mp1[id(x.cus_id)] << " " << mp2[id(x.or_id)] << " ";
        out << x.amount << " " << gia_ban[id(x.or_id)] * x.amount << " ";
        out << x.profit << "\n";
        return out;
    }
};

bool cmp(HoaDon x, HoaDon y){
    if(x.profit != y.profit)
        return x.profit > y.profit;
    return x.bill_id < y.bill_id;
}

void sapxep(HoaDon x[], int k){
    sort(x, x + k, cmp);
}


int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}