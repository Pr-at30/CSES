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
        ll n,sum=0;
        cin>>n;
        vector<ll> a;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            a.emplace_back(x);
            sum+=x;
        }
        ll size = pow(2,n);
        ll ans=INT32_MAX;
        for(int i=0;i<size;i++)
        {   
            ll ssum=0;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    ssum+=a[j];
                }       
            }
            if(ssum!=sum)
            {
                ans=min(abs(sum-2*ssum),ans);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

// Not a correct solution

// 1 2 3 4 7

// 1 3 6 10 17

// 15 11 5 7 