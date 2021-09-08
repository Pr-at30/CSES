#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> a;  vector<bool> ass;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.emplace_back(x);
        ass.push_back(false);
    }
    sort(a.begin(),a.end());

    int ans=0;
    for(int i=0,j=n-1;i<j;  )
    {
        if((a[i]+a[j])<=x)
        {
            ass[i]=true;  ass[j]=true;
            i++;    j--;    ans++;  
        }
        else
        {
            j--;
        }
    }
    for(auto x:ass)
    {
        if(!x)
        {
            ans++;  x=true;
        }
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