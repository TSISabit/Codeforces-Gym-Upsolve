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
	int n;
	cin>>n;
	readv(a,n);
	int prf[n+1];
	prf[0]=0;
	for (int i = 1; i <=n; ++i)
	{
		prf[i]=a[i-1]+prf[i-1];
		//cout<<prf[i]<<' ';
	}
	read(q);
	while(q--){
		int x,y,m;
		cin>>x>>y>>m;
		cout<<min(max(x,prf[n]),(y+prf[m]))<<nn;
	}
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