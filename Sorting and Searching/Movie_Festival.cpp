#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> events;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        events.emplace_back(make_pair(y,x));
    }
    sort(events.begin(),events.end()); // sorts by first element (ending time)
    int currentEventEnd = -1; // end of event currently attending
    int ans = 0; // how many events were attended?
    for(int i = 0; i < n; i++)
    { // process events in order of end time
        if(events[i].second >= currentEventEnd)
        {   // if event can be attended we know that this
            // is the earliest ending event that we can
            // attend because of how the events are sorted
            currentEventEnd = events[i].first;
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}