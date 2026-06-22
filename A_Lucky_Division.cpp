#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;



int32_t main()
{
    fastio();
    int t;
    cin >> t;
    vi arr={4,7,44,47,444,447,477,474,74,77,744,747,774,777};
    bool flag=false;
    for(int i=0;i<arr.size();i++)
    {
        if(t%arr[i]==0)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    cout<<"YES\n";
    else 
    cout<<"NO\n";
    return 0;
}