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
        ll n,sum;
        cin>>n;
        sum = (n*(n+1))/2 ;
        vector <int> a;
        vector<int> b;
        if( sum%2==0 )
        {
            cout<<"YES\n";
            sum/=2;
            while(n)
            {
                if((sum-n)>=0)
                {
                    sum-=n;
                    a.emplace_back(n);
                }
                else
                {
                    b.emplace_back(n);
                }
                n--;
            }
            cout<<a.size()<<"\n";
            for(auto x:a)
            {
                cout<<x<<" ";
            }
            cout<<"\n";

            cout<<b.size()<<"\n";
            for(auto x:b)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }   
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}