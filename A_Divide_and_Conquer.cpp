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
    int n;
    cin>>n;
    vi a(n);
    int odd=0,ans=INT_MAX;
    for(int &it:a)
    {
        cin>>it;
        if(it%2==1)odd++;
    }
    if(odd%2==0)
    {
        cout<<"0\n";
        return;
    }

        rep(i,n)
        {
            int t=a[i];
            int c=0;
            if(t%2==0)
            {
                while(t%2==0 && t>0)
                {
                    t=t/2;
                    c++;
                }
            }
            else
            {
                while(t%2!=0)
                {
                    t=t/2;
                    c++;
                }
            }
            ans=min(ans,c);

        }
    cout<<ans<<"\n";


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