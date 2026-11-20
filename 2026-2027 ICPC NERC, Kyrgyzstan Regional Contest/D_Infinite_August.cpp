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

bool leapYear(int y){
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0); 
}

int daysInMonth(int m, int y){
    if(m == 2){
        if(leapYear(y)) return 29; 
        else return 28; 
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11) return 30; 
    else return 31; 
}
void solve() {
    int m, y, d, m2, y2; cin >> m >> y >> d >> m2 >> y2; 
    int ans = 0; 

    if(y == y2){
        for(int i = m; i < m2; i++) ans += daysInMonth(i, y); 
    }
    else{
        for(int i = m; i <= 12; i++) ans += daysInMonth(i, y); 
        for(int i = y + 1; i < y2; i++){
            if(leapYear(i)) ans += 366; 
            else ans += 365; 
        }
        for(int i = 1; i < m2; i++) ans += daysInMonth(i, y2); 
    }

    ans += d; 
    cout << ans << nn; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // int t; cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}