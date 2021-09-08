#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void GreyCode(int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        int val = (i ^ (i >> 1));
        bitset<32> r(val);
        string s = r.to_string();
        cout << s.substr(32 - n) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--)
    {
        int n;
        cin>>n;
        GreyCode(n);
    }
    return 0;
}