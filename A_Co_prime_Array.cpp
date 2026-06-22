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
    int n;
    cin >> n;
    vector<long long> arr(n);
    vector<long long> check(n);
    int cnt=0;
    rep(i,n)
    {
        cin>>arr[i];
        check[i]=0;
    }
    rep(i,n-1)
    {
        if(gcd(arr[i],arr[i+1])!=1)
        {
            check[i]=1;
            cnt++;
        }
    }
    cout<<cnt<<"\n";

    rep(i,n)
    {
        cout<<arr[i]<<" ";
        if(check[i])cout<<"1 ";
    }
    return 0;
}