#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    int ans=0,sum=0;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a.emplace_back(make_pair(x,1));
        a.emplace_back(make_pair(y,-1));
    } 
    sort(a.begin(),a.end());
    for(int i=0;i<2*n;i++)
    {
        sum+=a[i].second;
        ans=max(ans,sum);
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