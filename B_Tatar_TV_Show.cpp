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
    bool isPossible=true;
    int n,k;cin>>n>>k;
    string s;cin>>s;
    for(int i=0;i<n-k;i++)
    {
        if(s[i] == '1')
        {
            s[i] = '0'; 
            
            s[i+k] = (s[i+k] == '1' ? '0' : '1');
        }
    }  
    rep(i,n)
    {
        if(s[i]=='1')isPossible=false;
    }
    if(isPossible)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
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