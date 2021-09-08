#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a;  vector<int> b;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.emplace_back(x);
    }

    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        b.emplace_back(x);
    }

    sort(a.begin(),a.end());    sort(b.begin(),b.end());

    int ans=0;
    for(int i=0,j=0;i<n && j<m ;    )
    {
        if(abs(a[i]-b[j])<=k)
        {
            i++;    j++;    ans++;
        }
        else
        {
            if(a[i]-b[j]>=k)
            {
                j++;
            }
            else
            {
                i++;
            }
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