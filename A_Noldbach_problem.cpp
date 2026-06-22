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
    
}

int32_t main()
{
    fastio();
    int n,k;
    cin>>n>>k;
    vi primes;
    for(int i=2;i<=n;i++)
    {
        bool flag=false;
        if(i==2){
            primes.push_back(i);
            continue;
        }
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=true;
                break;
            }
        }
        if(!flag)primes.push_back(i);
    }
    int cnt=0;
    for(int i=0;i<primes.size()-1;i++)
    {
        int temp=primes[i]+primes[i+1]+1;
        for(int j=0;j<primes.size();j++)
        {
            if(temp==primes[j]){
                cnt++;
                break;
            }
        }
    }
    if(cnt>=k)cout<<"YES";
    else cout<<"NO";

    return 0;
}