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
    ll n;cin>>n;
    int arr[]={6,8,4,2};
    int i=(n)%4;
    if(n!=0)
    cout<<arr[i]<<"\n";
    else
    cout<<1<<"\n";
}

signed main()
{
    fastio();
    int t;
    t=1;  
    // cin >> t;
    while(t--)
    {
        answertoProb();
    }
    return 0;
}