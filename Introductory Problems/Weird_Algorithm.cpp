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
        ll n;
        cin>>n;
        while(n!=1)
        {
            cout<<n<<" ";
            if(n&1)
            {
                n = 3*n+1;
            }
            else
            {
                n/=2;
            }
        }
        cout<<n;
    }
    return 0;
}