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
        int n=s.length();

        unordered_map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }

        int c=0;
        char mid='\0';
        for(auto x:m)
        {
            if(x.second&1)
            {
                c++;
                mid=x.first;
            }
        }

        string left="",right="";
        for(auto x:m)
        {
            int j=x.second/2;
            for(int i=0;i<j;i++)
            {
                left = left+x.first;
                right = x.first+right;
            }
        }
    
        if((c==0 && n%2==1) || (c==1 && n%2==0) || (c>1))
        {   
            cout<<"NO SOLUTION\n";
        }
        else if(c==1)
        {
            cout<<left<<mid<<right<<"\n";
        }
        else if(c==0)
        {
            cout<<left<<right<<"\n";
        }
        else 
        {
            cout<<"NO SOLUTION\n";
        }
    }
    return 0;
}