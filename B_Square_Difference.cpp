#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;

void answertoProb()
{
  ll a,b;
  cin>>a>>b;

  if(a-b==1)
  {
    for(int i=2;i<=sqrt(a+b);i++)
    {
        if((a+b)%i==0)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
  }   
  else
  {
    cout<<"NO\n";
  }
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while(t--)
    {
        answertoProb();
    }
    return 0;
}