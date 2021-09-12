#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    string s,x;
    cin>>s>>x;
    int ans=0,i=-1;
 
    while(s.find(x,i+1)!=string::npos)
    {
        i=s.find(x,i+1);
        ans++;
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

//  TLE'd on 2 TC