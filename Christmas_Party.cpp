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
ll mod= 1e9+7;

ll derangement(ll n)
{
    if(n==1)return 0;
    ll prev2=0;ll prev1=1;
    ll der=1;
    for(int i=3;i<=n;i++)
    {
        der=((i-1)*(prev1+prev2))%mod;
        prev2=prev1;
        prev1=der;
    }
    return der;
}

void prsdx()
{
    ll n;cin>>n;
    cout<<derangement(n);
}

signed main()
{
    fastio();
    int t;
    t = 1;  
    // cin >> t;
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