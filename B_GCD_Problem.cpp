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
    ll n;
    cin>>n;
    if(n%2==0)cout<<(n-1)/2<<" "<<(n-1)/2+1<<" 1";
    else{
        int ce=(n-1)/2;
        if(ce%2==0)cout<<ce-1<<" "<<ce+1<<" 1";
        else
        cout<<ce-2<<" "<<ce+2<<" 1";
    }   
    cout<<"\n";
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