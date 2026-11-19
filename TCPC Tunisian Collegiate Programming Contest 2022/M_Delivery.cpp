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

bool isPowerOfTwo(int n) {
   return (n > 0 && (n & (n - 1)) == 0);
}

void solve() {
    read(x); 
    if(isPowerOfTwo(x) || x == 1) cout << -1 << nn; 
    else if(x & 1) cout << x / 2 << " " << x / 2 + 1 << nn; 
    else{
        int d = x, k = 1; 
        while (d % 2 == 0)
        {
            d /= 2; 
            k *= 2; 
        }
        int l = (d / 2) - (k - 1); 
        int r = (d / 2 + 1) + (k - 1); 

        if(l <= 0) l = 1 - l; 
        if(l >= r) cout << -1 << nn; 
        else cout << l << " " << r << nn; 
    }
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