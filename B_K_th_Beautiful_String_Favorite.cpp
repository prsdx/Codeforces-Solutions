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

void prsdx()
{
    ll n,k;cin>>n>>k;

    string s(n,'a');
    for(int i=n-2;i>=0;i--)
    {   
        //first find the group number the k belongs(Each group i has i elements)
        if(k<=(n-i-1))// n-i-1 is the group number
        {
            s[i]='b';
            s[n-k]='b';
            break;
        }
        k-=(n-i-1);
    }
    cout<<s<<"\n";

}

signed main()
{
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