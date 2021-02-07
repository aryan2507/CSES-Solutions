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

vi dp;
int main()
{ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int test=1;
 //cin>>test;
 while(test--)
 {
    int n,x;cin>>n>>x;
    vi prices(n);
    vi pages(n);
    dp.assign(x+1,0);
    for(int i=0;i<n;i++)
        cin>>prices[i];
    for(int i=0;i<n;i++)
        cin>>pages[i];
    for(int i=0;i<n;i++)
    {
        for(int j=x;j>=0;j--)
        {
            if(j-prices[i]>=0)
            {
                dp[j]=max(dp[j],dp[j-prices[i]]+pages[i]);
            }
        }
    }
    cout<<dp[x]<<endl;
 }
 return 0;
}

