#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);   ll target;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    target = n&1 ? a[n/2] : (a[n/2]+a[n/2-1])/2;
    ll ans=0;
    for(auto x:a)
    {
        ans+= abs(x-target);
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