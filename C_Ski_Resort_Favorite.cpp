#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j - 1; i >= 0; i--)
#define all(x) x.begin(), x.end()

using ll = long long;
using vi = vector<int>;

void prsdx()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v1(n);
    for (auto &it : v1)
    {
        cin >> it;
    }
    ll current_cnt = 0;
    ll ans = 0;
    rep(i, n)
    {
        if (v1[i] <= q)
        {
            current_cnt++;
        }
        else
        {
            if (current_cnt >= k)
            {
                ans += ((current_cnt - k + 1) * (current_cnt - k + 2)) / 2;
            }
            current_cnt = 0;
        }
    }
    if (current_cnt >= k)
    {
        ans += ((current_cnt - k + 1) * (current_cnt - k + 2)) / 2;
    }
    cout<<ans<<"\n";
}

signed main()
{
    fastio();
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        prsdx();
    }
    return 0;
}