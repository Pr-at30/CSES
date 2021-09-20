#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a.emplace_back(x);
    }
    sort(a.begin(),a.end());
    ll res = 1; // Initialize result

    for (ll i = 0; i < n && a[i] <= res; i++)
    {
        res = res + a[i];
    }
    
    cout<<res<<"\n";
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