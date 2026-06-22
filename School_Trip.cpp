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
    int n,x,k;
    cin>>n>>x>>k;
    if(x%k==0)
    cout<<0<<"\n";
    else
    {
        int ex=x%k;
        if(ex+x <=n)
        {
            cout<<min(ex,3-ex)<<"\n";
        }
        else
        {
            cout<<ex<<"\n";
        }
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