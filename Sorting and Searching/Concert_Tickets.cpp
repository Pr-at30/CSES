#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    int n,m;
    cin>>n>>m;
    multiset<int> a;   vector<int> b(m);

    //  Using vector gives TLE
    //  Using lower bound gives WA on 2 TC(4,6) :: Might be due to wrong implementation
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        auto x = a.upper_bound(b[i]);
        if(x==a.begin())
        {
            cout<<"-1";
        }
        else 
        {
            cout<<*(--x);
            a.erase(x);
        }
        cout<<"\n";
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