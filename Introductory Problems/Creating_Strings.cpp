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
        sort(s.begin(),s.end());
        int ans=1;
        while(next_permutation(s.begin(),s.end()))
        {
            ans++;
        }
        cout<<ans<<"\n";
        do
        {
            cout<<s<<"\n";
        }while(next_permutation(s.begin(),s.end()));
    }
    return 0;
}