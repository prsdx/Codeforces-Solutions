#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

using ll =long long ;
using vi =vector<int>;
map <string,int> idx;
void prsdx()
{
   string s;cin>>s;
   cout<<idx[s]<<"\n";
}

signed main()
{

    fastio();
    string w="  ";
    int i=1;
    for(w[0]='a';w[0]<='z';w[0]++)
    {
        for(w[1]='a';w[1]<='z';w[1]++)
        {
            if(w[0]!=w[1])
            {
                idx[w]=i++;
            }
        }
    }

    int t;
    t=1;  
    cin >> t;
    while(t--)
    {
        prsdx();
    }
    return 0;
}