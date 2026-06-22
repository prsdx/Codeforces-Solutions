#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;

long long mod=1e9+7;
long long binpow(long long base,long long exp,long long mod)
{
    if(exp==0)return 1;
    long long res=binpow(base,exp/2,mod);
    res=(res*res)%mod;

    if(exp%2==1)
    res=(base*res)%mod;

    return res;
}

void answertoProb()
{
    long long a,b;cin>>a>>b;
    cout<<binpow(a,b,mod)<<"\n";
}

signed main()
{
    fastio();
    int t;
    t=1;  
    cin >> t;
    while(t--)
    {
        answertoProb();
    }
    return 0;
}