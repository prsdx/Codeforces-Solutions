#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

using ll =long long ;
using vi =vector<int>;

void prsdx()
{
    ll n;
    cin>>n;
    ll ans=2;
    ans=ans<<(n);
    cout<<ans-2;
}

signed main()
{
    fastio();
    int t;
    t=1;  
    // cin >> t;
    while(t--)
    {
        prsdx();
    }
    return 0;
}