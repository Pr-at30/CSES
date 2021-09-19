#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,x,f=0;
    cin>>n>>x;
    vector<pair<int,int>> a;
    vector<int> b;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.emplace_back(make_pair(x,i+1));
    }
    sort(a.begin(),a.end());
    // for(auto x:a)
    // {
    //     cout<<x.first<<" ";
    // }
    // cout<<"\n";
    for(int i=0,j=n-1;i<j;  )
    {
        if(a[i].first+a[j].first>x)
        {
            j--;
        }
        else if(a[i].first+a[j].first<x)
        {
            i++;
        }
        else
        {
            f=1;
            b.emplace_back(a[i].second);
            b.emplace_back(a[j].second);
            break;
        }
    }
    if(f)
    {
        sort(b.begin(),b.end());
        cout<<b[0]<<" "<<b[1]<<"\n";
    }
    else
    {
        cout<<"IMPOSSIBLE\n";
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