#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if((a-b)&1)
        {
            cout<<"YES\n";
        }       
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}