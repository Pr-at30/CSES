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
        int n;
        cin>>n;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        cout<<s.size();
    }
    return 0;
}