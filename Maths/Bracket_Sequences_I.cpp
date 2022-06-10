#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define sz(x) ((ll)(x).size())
#define pb push_back
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()

const ll MOD = 1e9 + 7;

ll N, numerator, denominator;

ll fastpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

ll inverse(ll a)
{
    return fastpow(a, MOD - 2);
}
const int mxN = 2e6 + 6;
int F[mxN], I[mxN];
void solve()
{
    cin>>N;
    if (N & 1)
    {
        cout << "0\n";
        return;
    }
    numerator = 1;
    for (int i = 1; i <= N; i++)
        numerator = (numerator * i) % MOD;

    denominator = 1;
    for (int i = 1; i <= N / 2; i++)
        denominator = (denominator * i) % MOD;
    denominator = (denominator * denominator) % MOD;
    denominator = (denominator * (N / 2 + 1)) % MOD;

    printf("%lld\n", (numerator * inverse(denominator)) % MOD);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}