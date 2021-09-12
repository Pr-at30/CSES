#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int ans=0;
vector<string> s;

void toh(int n,int a,int c,int b)    // Tower Of Hanoi
{
    if(n>0)
    {
        toh(n-1,a,b,c);
        ans++;
        s.push_back(to_string(a)+" "+to_string(c));
        toh(n-1,b,c,a);
    }
}

void solve()
{
    int n;
    cin>>n;
    int a=1,b=2,c=3;
    toh(n,a,c,b);   // a-> from     b-> aux      c-> to
    cout<<ans<<"\n";
    for(auto x:s)
    {   
        cout<<x<<"\n";
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