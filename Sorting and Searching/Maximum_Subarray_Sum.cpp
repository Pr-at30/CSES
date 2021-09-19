#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;  cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ll ans = a[0], sum = 0, min_sum = 0;    // Don't use int.Use ll

    for (ll r = 0; r < n; ++r)     //Not Kadane algorithm
    {
        sum += a[r];
        ans = max(ans, sum - min_sum);
        min_sum = min(min_sum, sum);
    }
    cout<<ans<<"\n";
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