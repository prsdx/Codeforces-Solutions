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
ll mod=1e9;

ll ncr[1001][1001];

void ncr_pascal()
{
    ncr[0][0]=1;
    loop(1,1001)
    {
        loop2(0,i+1)
        {
            ncr[i][j]=ncr[i-1][j];
            if(j>0)ncr[i][j]=(ncr[i][j]+ncr[i-1][j-1])%mod;  
        }
    }

}

void prsdx()
{
    ll n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<ncr[n][i]<<" ";
    }
    cout<<"\n";
}

signed main()
{
    fastio();
    ncr_pascal();
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