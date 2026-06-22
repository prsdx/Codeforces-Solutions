#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

using ll =long long ;
using vi =vector<int>;
#define int long long
int mod=1e9+7;
int binpowmod(int base,int exp,int m)
{
    int res= 1;
    base%=m;
    while(exp>0)
    {
        if(exp%2==1)
        res=((res%m)*(base%m))%m;
        base=((base%m)*(base%m))%m;
        exp/=2;
    }
    return res;
}

void prsdx()
{
    int n;cin>>n;
    int res=binpowmod(2,n,mod);
    cout<<((res%mod)+mod)%mod<<endl;

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