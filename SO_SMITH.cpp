#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTER() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// Dywang //
#define N 1000005

vector<int> primes;
void sieve(){
    vector<bool> isprime(N, true);
    for(int i = 2; i * i <= N; i++){
        if(isprime[i]){
            for(int j = i * i; j <= N; j+=i) isprime[j] = false;
        }
    }
    for(int i = 2; i <= N; i++){
        if(isprime[i]) primes.push_back(i);
    }
}

int sum_digit(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


string is_Smith(int n){
    int nsaved = n;
    int s1 = sum_digit(n);
    int s2 = 0;
    for(auto x : primes){
        if(x == nsaved) return "NO";
        if(x > n) break;
        while(n % x == 0){
            s2 += sum_digit(x);
            n /= x;
        }
    }
    if(s1 == s2) return "YES";
    return "NO";
}

int main()
{
    FASTER();
    int t; cin >> t;
    sieve();
    while(t--){
        int n; cin >> n;
        cout << is_Smith(n) << "\n";
    }
    return 0;
}