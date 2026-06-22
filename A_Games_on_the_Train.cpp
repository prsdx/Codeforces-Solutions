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
    int n;cin>>n;
    int arr[n];
    int mi=INT_MAX;int ma=INT_MIN;
    rep(i,n)
    {
        int s;cin>>s;
        if(s<=mi)mi=s;
        if(s>=ma)ma=s;    
    }
    cout<<ma+1-mi<<endl;

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