#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string s;

void solve()
{
    int i;
    cin>>i;
    cout<<s[i-1]<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    ll i=1;
    for(    ;i<=100000;i++)
    {
        s+=to_string(i);
    }
    // cout<<s<<"\n";
    while(t--)
    {
        solve();
    }
    return 0;
}


//      TLE 