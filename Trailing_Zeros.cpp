#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--)
    {
        int ans=0,k=5,n;
        cin>>n;
        while(k<=n)
        {
            ans+=n/k;
            k*=5;
        }        
        cout<<ans<<"\n";
    }
    return 0;
}