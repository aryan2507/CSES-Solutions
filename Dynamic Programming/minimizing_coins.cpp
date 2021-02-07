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
typedef vector<vi> vvi;

int main()
{ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int test=1;
 //cin>>test;
 while(test--)
 {
    int n,x;cin>>n>>x;
    vi vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    vli dp(1e6+1,x+5);
    for(int i=0;i<n;i++)
        dp[vec[i]]=1;
    for(int j=1;j<=x;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(j-vec[i]>=1)
                dp[j]=min(dp[j],dp[j-vec[i]]+1);
        }
    }
    if(dp[x]>x)
        cout<<-1<<endl;
    else
        cout<<dp[x]<<endl;
 }
 return 0;
}

