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
    string s;
    cin>>s;
    int balance=0;
    int cm=0,ct=0;
    rep(i,n)
    {
        if(s[i]=='T')ct++;
        else cm++;

    }
    if(ct!=2*cm)
    {
        cout<<"NO\n";
        return;
    }
    rep(i,n)
    {
        if(s[i]=='T')balance++;
        else balance--;

        if(balance<0)
        {
            cout<<"NO\n";
            return;
        }
    }
    balance=0;
    rrep(i,n)
    {
        if(s[i]=='T')balance++;
        else balance--;

        if(balance<0)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
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