#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sz(x) (int)(x).size()
#define pb push_back

void solve()
{
    int n;
    cin>>n;
    multiset<int> s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        
        auto it=s.upper_bound(x);
        if(it!=s.end())
        {
            s.erase(it);
            s.insert(x);
        }
        else
        {
            s.insert(x);
        }
    }
    cout<<s.size()<<"\n";
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

