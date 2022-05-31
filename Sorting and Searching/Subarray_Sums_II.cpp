#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sz(x) ((ll)(x).size())
#define pb push_back
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n,x;
    cin>>n>>x;

    vector<ll> a(n);

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    long long prefix_sum = 0;
	long long ans = 0;
	map<long long, int> sums;
	sums[0] = 1;
	for (int p : a) 
    {
		prefix_sum += p;
		ans += sums[prefix_sum - x];
		sums[prefix_sum]++;
	}
	cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

