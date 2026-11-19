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

void solve() {
    read(n); 
    vi vote(n + 1, 0); 
    for(int i = 1; i <= n; i++){
        read(x); 
        for(int j = 0; j < x; j++){
            read(sus); 
            vote[sus]++; 
        }
    }

    vi el; int lim = n / 2; 
    for(int i = 1; i <= n; i++){
        if(vote[i] > lim) el.pb(i); 
    }
    cout << sz(el) << nn; 
    for(int i : el) cout << i << " "; 
    cout << nn; 
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