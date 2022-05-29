#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sz(x) ((ll)(x).size())
#define pb push_back
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()

bool check(ll x, vector<ll> a , ll k)
{
    ll sum = 0 , wu = 1ll;
    // cout<<"[ ";
    for(ll i=0;i<a.size();i++)
    {
        if(sum+a[i]<=x)
        {
            sum+=a[i];
            // cout<<a[i]<<" , ";
        }
        else
        {
            wu++;
            sum = a[i];
            // cout<<"] , [";
        }
    }
    // cout<<'\n';
    // cout<<wu<<" for "<<x<<"\n";
    if(wu<=k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    ll n,k;
    cin>>n>>k;

    vector<ll> a(n);
    ll r = 0;

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        r+=a[i];
    }

    ll l = *max_element(all(a));
    

    while(l<r)
    {
        // cout<<l<<" "<<r<<'\n';
        ll mid = l + (r-l)/2ll ;
        if(check(mid,a,k))
        {
            // cout<<mid<<" is possible\n";
            r = mid;
        }
        else
        {
            // cout<<mid<<" is not possible\n";
            l = mid + 1 ;
        }
    } 

    cout<<l<<"\n";
}

//   1 2 3 4 5
// [ F F T T F]

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}