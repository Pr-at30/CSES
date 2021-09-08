#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--)
    {
        ll sum=0,n;
        cin>>n;
        sum= (n*(n+1))/2;
        for(int i=1;i<n;i++)
        {
            int x;
            cin>>x;
            sum-=x;
        }
        cout<<sum;
    }
    return 0;
}