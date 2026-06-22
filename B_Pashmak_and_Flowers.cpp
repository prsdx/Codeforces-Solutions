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
    ll n;cin>>n;ll arr[n];
    rep(i,n)cin>>arr[i];
    
    sort(arr,arr+n);
    cout<<arr[n-1]-arr[0]<<" ";
    ll min_c=0;
    ll max_c=0;
    rep(i,n)
    {
        if(arr[i]==arr[0])min_c++;
        if(arr[i]==arr[n-1])max_c++;
    }
    if(arr[0]!=arr[n-1])cout<<min_c*max_c;
    else 
    {
        ll ans=n*(n-1);
        ans/=2;
        cout<<ans;

    }
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