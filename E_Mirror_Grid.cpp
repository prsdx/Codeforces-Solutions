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
    vector<vector<char>> mat(n,vector<char>(n));
    rep(i,n)
    {
        rep(j,n)
        {
            cin>>mat[i][j];
        }
    }

    int ans=0;
    rep(i,n)
    {
        rep(j,n)
        {
            int c0=0,c1=0;
            if(mat[i][j]=='0')
            c0++;
            else
            c1++;

            if(mat[j][n-1-i]=='0')
            c0++;
            else
            c1++;

            if(mat[n-1-i][n-1-j]=='0')
            c0++;
            else
            c1++;

            if(mat[n-1-j][i]=='0')
            c0++;
            else
            c1++;

            if((c0==0)||(c1==0))
            continue;


            if(c0>=c1)
            {
                ans+=c1;
                mat[i][j]='0';
                mat[j][n-1-i]='0';
                mat[n-1-i][n-1-j]='0';
                mat[n-1-j][i]='0';

            }
            else
            {
                ans+=c0;
                mat[i][j]='1';
                mat[j][n-1-i]='1';
                mat[n-1-i][n-1-j]='1';
                mat[n-1-j][i]='1';               
            }

        }
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