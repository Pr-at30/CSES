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

    map<ll,ll> mp;
    mp[0]=1;

    ll ans=0,sum=0;
    for(ll i=0;i<n;i++)
    {   
        sum+=a[i];
        ll m = sum-x;
        if(mp[m]>0)
        {
            ans++;
            // cout<<i<<" - ";
        }
        mp[sum]++;
    }

    cout<<ans<<'\n';
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