#include<bits/stdc++.h>
using namespace std;
// dywang
int  main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        switch(s[i])
        {
            case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':
                break;
            default:
            cout << "." << s[i];
        }
    }
    return 0;
}
