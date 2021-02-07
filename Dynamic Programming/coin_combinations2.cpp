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
    vli dp(1e6+1,0);
    for(int j=0;j<n;j++)
    {dp[vec[j]]+=1;
        for(int i=1;i<=x;i++)
        {

                if(i+vec[j]<=x)
                {
                    dp[i+vec[j]]+=(ll int)dp[i];
                    dp[i+vec[j]]%=mod;
                }
        }
    }
    cout<<dp[x]<<endl;
 }
 return 0;
}

