#include <iostream>
#include <bits/stdc++.h>
#include <set>
#define isPowerOfTwo(S) (!(S & (S - 1)))
#define ll long long
#define ull unsigned long long
#define mod 1000000007
#define INF 1e12
using namespace std;
typedef pair<int,int> pi;
typedef pair<pi,int> trip;
typedef pair<ll,ll> pli;

typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<ll> vli;
typedef vector<vli> vvi;


int main()
{ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int test=1;
 //cin>>test;

 while(test--)
 {
    int n,m;cin>>n>>m;
    vi vec(n);
    vvi dp;
    dp.assign(n,vli(m+1,0));
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];

    }
    for(int i=n-1;i>=0;i--)
    {
        if(vec[i]==0)
        {
            for(int j=1;j<=m;j++)
            {
                dp[i][j]=1;
            }
        }
        else
        {
            dp[i][vec[i]]=1;
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=1;j<=m;j++)
        {
            ll int temp=0;
            for(int k=-1;k<2;k++)
            {
                if(j+k>0&&j+k<=m)
                {
                    temp+=dp[i+1][j+k];
                    temp%=mod;
                }
            }
            dp[i][j]*=temp;
            dp[i][j]%=mod;
        }
    }
    ll int ans=0;
    for(int i=1;i<=m;i++)
    {
        ans+=dp[0][i];
        ans%=mod;
    }
    cout<<ans<<endl;
 }
 return 0;
}

