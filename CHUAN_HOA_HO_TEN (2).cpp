#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Dywang - Take the dream away //

string chuanhoa(string &s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s[0] -= 32;
    return s;
}

int main()
{
    //   for (auto &x : s);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int choice;
        cin >> choice;
        cin.ignore();
        string s;
        getline(cin, s);
        vector<string> v;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            v.push_back(chuanhoa(word));
        }
        if (choice == 1)
        {
            cout << v[v.size() - 1] << " ";
            for (int i = 0; i < v.size() - 1; i++)
                cout << v[i] << " ";
        }
        else
        {
            for (int i = 1; i < v.size(); i++)
                cout << v[i] << " ";
            cout << v[0];
        }
        cout << "\n";
    }
    return 0;
}
