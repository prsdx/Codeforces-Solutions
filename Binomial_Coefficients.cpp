/*
==========================================================================
 AUTHOR:     @prsd_x
==========================================================================
 LOGIC / EXPLANATION:
 
 
==========================================================================
*/

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define loop(from,to)    for(int i=from;i<to;i++)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define all(x) x.begin(), x.end()

using ll = long long;
using vi = vector<int>;

ll mod=1e9+7;
ll fact[1000001];
void precompute()
{
    fact[0]=1;
    loop(1,1000001)
    {
        fact[i]=(fact[i-1]*i)%mod;
    }
}
long long binpowmod(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}
ll inverse(ll n)
{
    return binpowmod(n,mod-2,mod);
}

ll ncr(ll n,ll r)
{
    ll num=fact[n];
    ll den=(fact[n-r]*fact[r])%mod;
    return (num*inverse(den))%mod;
}

void prsdx()
{
    ll n,r;cin>>n>>r;
    ll ans= ncr(n,r);
    cout<<((ans%mod)+mod)%mod<<"\n";

}

signed main()
{
    precompute();
    fastio();
    int t;
    t = 1;  
    cin >> t;
    while(t--)
    {
        prsdx();
    }
    
    /*
    ----------------------------------------------------------------------
    Confused about the logic or need help optimizing? 
    Reach out or leave a message on my X handle: @YOUR_HANDLE
    ----------------------------------------------------------------------
    */
    return 0;
}