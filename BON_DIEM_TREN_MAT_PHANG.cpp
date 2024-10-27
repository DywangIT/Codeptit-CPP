#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang - Take the dream away //

typedef struct Point
{
    int x, y, z;
} Point;


int main()
{
    FASTER();
    int t; cin >> t;
    while(t--){
        Point P[4];
        for(int i = 0; i < 4; i++){
            cin >> P[i].x >> P[i].y >> P[i].z;
        }
        Point AB, AC, AD, tmp;
        AB.x = P[1].x - P[0].x; AB.y = P[1].y - P[0].y; AB.z = P[1].z - P[0].z;
        AC.x = P[2].x - P[0].x; AC.y = P[2].y - P[0].y; AC.z = P[2].z - P[0].z;
        AD.x = P[3].x - P[0].x; AD.y = P[3].y - P[0].y; AD.z = P[3].z - P[0].z; 
        tmp.x = AB.y * AC.z - AB.z * AC.y;
        tmp.y = AB.z * AC.x - AB.x * AC.z;
        tmp.z = AB.x * AC.y - AB.y * AC.x;
        ll res = 1ll*tmp.x * AD.x + 1ll*tmp.y * AD.y + 1ll*tmp.z * AD.z;
        if(res == 0) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
    return 0;
}
