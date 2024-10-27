#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //
#define PI 3.141592653589793238

bool check(double A, double B, double C){
    if(A + B > C && A + C > B && B + C > A) return true;
    return false;
}

void solve(double a, double b, double x, double y, double z, double t){
    double A = sqrt((a - x) * (a - x) + (b - y) * (b - y));
    double B = sqrt((a - z) * (a - z) + (b - t) * (b - t));
    double C = sqrt((z - x) * (z - x) + (t - y) * (t - y));
    if(check(A, B, C) == 0){
        cout << "INVALID" << "\n";
        return;
    }
    double R = A * B * C / sqrt((A + B + C) * (A + B - C) * (A + C - B) * (B + C - A));
    double S = PI * R * R;
    cout << fixed << setprecision(3) << S << "\n";
}

int main()
{
    FASTER();
    int testcase; cin >> testcase;
    while(testcase--){
        double a, b, x, y, z, t;
        cin >> a >> b >> x >> y >> z >> t;
        solve(a, b, x, y, z, t);
    }
    return 0;
}
