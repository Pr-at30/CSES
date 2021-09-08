#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    while(t--)
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
        for(ll i=1;i<n;i++)
        {
            a[i]=a[i-1]+a[i];
        }
        int ans=INT16_MAX;
        for(int i=0;i<n;i++)
        {   
            ans=min(ans,(a[n-1]-2*a[i]));
        }
        cout<<ans<<"\n";
    }
    return 0;
}

// Not a correct solution

// 1 2 3 4 7

// 1 3 6 10 17

// 15 11 5 7 