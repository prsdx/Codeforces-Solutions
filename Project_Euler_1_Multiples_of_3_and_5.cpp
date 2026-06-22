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
    ll n;cin>>n;
    n--;
    ll n1=n/3;
    ll n2=n/5;
    ll n3=n/15;
    ll ans= 3*n1*(n1+1)+5*n2*(n2+1)- 15*n3*(n3+1);
    cout<<ans/2<<"\n";   
}

signed main()
{
    fastio();
    int t;
    t=1;  
    cin >> t;
    while(t--)
    {
        prsdx();
    }
    return 0;
}