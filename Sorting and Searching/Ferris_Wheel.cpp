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
        int n,x;
        cin>>n>>x;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.emplace_back(x);
        }
        sort(a.begin(),a.end());
        int ans=0;
        int sum=0;
        for(int i=0;i<n;)
        {   
            int c=0;
            while(sum+a[i]<=x)
            {
                c++;
                sum+=a[i];
                i++;
            }
            sum=0;
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}

// 5 7 8 8 8 8 9 9 10 10

//Not a correct solution