#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--)
    {
        ll n,x=2;
        cin>>n;

        ll ans=1;
        while(n>0)
        {
            if(n&1)
            {
                ans = (ans*x)%MOD;
            }
            n/=2;
            x = (x*x) % MOD;
        }
        cout<<ans<<"\n";
    }
    return 0;
}