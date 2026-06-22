#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;

// void answertoProb()
// {


// }

int32_t main()
{
    fastio();
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //     answertoProb();
    // }
    ll n,a,b;
    cin>>n>>a>>b;

    for(ll i=0;i<=10000000;i++)
    {
        ll y=n-i*a;
        if(y%b==0 &&y>=0)
        {
            cout<<"YES\n";
            cout<<i<<" "<<(y)/b<<"\n";
            return 0;
        }

    }   
    cout<<"NO\n";
    return 0;
}