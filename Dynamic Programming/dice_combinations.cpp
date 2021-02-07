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
    int n; cin>>n;
    vli dp(n+1,0);
    for(int i=1;i<=6;i++)
        dp[i]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i-j>=0)
            {
                dp[i]+=dp[i-j];
                dp[i]%=mod;
            }

        }
    }
    cout<<dp[n]<<endl;

 }
 return 0;
}

