	#include <bits/stdc++.h>
	using namespace std;
	typedef long long ll;
	#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// Dywang //
	int cnt = 1;

	class SinhVien{
		string name, clas, dob, id;
		double gpa;
		public:
			void chuanhoaten(){
				string b = "";
				stringstream ss(name);
				string w;
				while(ss >> w){
					for(auto &x : w) x = tolower(x);
					w[0] -= 32;
					b += w + " ";
				}
				b.pop_back();
				name = b;
			}
			friend istream& operator >> (istream& in, SinhVien& a){
				in.ignore();
				getline(in, a.name);
				in >> a.clas >> a.dob >> a.gpa;
				a.chuanhoaten();
				if (a.dob[1] == '/') a.dob = "0" + a.dob;
				if (a.dob[4] == '/') a.dob.insert(3, "0");
				a.id = "B20DCCN";
				if(cnt < 10){
					a.id += "00" + to_string(cnt);
				}
				else a.id += "0" + to_string(cnt);
				++cnt;
				return in;
			}
			friend ostream& operator << (ostream& out, SinhVien& a){
				out << a.id << " " << a.name << " " << a.clas << " " << a.dob << " " << fixed << setprecision(2) << a.gpa << "\n";
				return out;
			}
	};



int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}