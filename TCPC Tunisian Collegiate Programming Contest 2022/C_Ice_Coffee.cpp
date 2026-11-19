#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define read(x) int x; cin >> x;
#define readv(v, n) vector<int> v(n); for (auto &i : v) cin >> i;
#define sz(x) (int)(x).size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define vi vector<int>
#define pb push_back
#define ppb pop_back

const int MAXN = 10000000;
int spf[MAXN + 1];

void sieveSPF() {
    for (int i = 1; i <= MAXN; i++) spf[i] = i;
    for (int i = 2; i * i <= MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}

void solve() {
    sieveSPF(); 
    read(n); 
    readv(a, n); readv(b, n); 

    int cnt = 0; 
    for (int i = 0; i < n; i++)
    {
        while(a[i] != b[i]){
            if(a[i] > b[i]) a[i] /= spf[a[i]]; 
            else b[i] /= spf[b[i]]; 
            cnt++; 
        }
        // cnt++; 
    }
    cout << cnt << nn; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}