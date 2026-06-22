#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

using ll =long long ;
using vi =vector<int>;
ll mod= 1e9+7;
ll binpowmod(ll base, ll exp)
{
    ll ans=1;
    base%=mod;
    while(exp>0)
    {
        if(exp%2==1)
        ans=(ans*base)%mod;
        base=(base*base)%mod;
        exp/=2;
    }
    return ans;
}

void prsdx()
{
    ll n;cin>>n;
    ll tem= binpowmod(3,3*n);
    ll tem2= binpowmod(7,n);
    ll ans= (tem%mod-tem2%mod+mod)%mod;
    cout<<((ans%mod)+mod)%mod;

}

signed main()
{
    fastio();
    int t;
    t=1;  
//     cin >> t;
    while(t--)
    {
        prsdx();
    }
    return 0;
}