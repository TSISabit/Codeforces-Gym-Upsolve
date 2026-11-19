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

void solve() {
	int n,x;
	cin>>n>>x;
	string s1,s2;
	cin>>s1>>s2;
	int cnt=0;
	x=(x%n);
	for (int i = 0; i < x; ++i)
	{
		char c=s1[n-x+i];
		if(s2[i]!=c)cnt++;
	}
	for (int i = 0; i < n-x; ++i)
	{
		char c=s1[i];
		if(s2[i+x]!=c)cnt++;
	}
	cout<<cnt;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t=1; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}