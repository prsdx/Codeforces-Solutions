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
  ll n,k;cin>>n>>k;
  string s;cin>>s;
  vector<bool>available(26,false);
  rep(i,k)
  {
    char c;cin>>c;
    available[c-'a']=true;
  }
  
  ll cnt=0;
  ll ans=0;

  rep(i,n)
  {
    bool is_there=false;
    if(available[s[i]-'a'])
    {
        is_there=true;
        cnt++;
    }
    else
    {
        ans+=(cnt)*(cnt+1)/2;
        cnt=0;
    }
  }
  if(cnt)
  {
    ans+=(cnt)*(cnt+1)/2;
  }
  cout<<ans;
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