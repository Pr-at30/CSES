#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()        // https://oeis.org/    ----> Numerical Sequences
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        cout << (i-1)*(i+4)*(i*i-3*i+4)/2<<"\n"; 
    }
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