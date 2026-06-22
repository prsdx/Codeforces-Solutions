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
    ll n,m;cin>>n>>m;
    ll tem1= n-(m-1);
    ll kmax= tem1*(tem1-1) ;
    ll base= n/m;
    ll rem=n%m;
    ll kmin_largeteam=rem*((base+1)*base/2);
    ll kmin_small= (m-rem)*((base)*(base-1)/2);
    ll kmin=kmin_largeteam+kmin_small;    
    cout<<kmin<<" "<<kmax/2<<"\n";  
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