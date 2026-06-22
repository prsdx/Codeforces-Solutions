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
    ll l,r,k;
    cin>>l>>r>>k;
    if(l==r)
    {
        if(l!=1)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }   
    else
    {
        int odd=0;
        if(r%2==0 && l%2==0)
        {
            odd=(r-l)/2;
        }
        else
        {
            odd=((r-l)/2)+1;
        }

        if(odd<=k)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
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