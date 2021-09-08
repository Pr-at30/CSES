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
        string s;
        cin>>s;
        
        int ans=1,c=1;
        for(int i=1;i<s.length();i++)
        {
            while(s[i]==s[i-1])
            {
                c++;
                i++;
            }
            ans=max(ans,c);
            c=1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}