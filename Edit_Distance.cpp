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

vvi dp;
int solve( int ind1, int ind2, string &s1, string &s2)
{
    if(ind1==s1.length())
    {
        return s2.length()-ind2;
    }
    else if(ind2==s2.length())
        return s1.length()-ind1;
    if(dp[ind1][ind2]!=-1)
        return dp[ind1][ind2];
     dp[ind1][ind2]=INT_MAX;
    if(s1[ind1]==s2[ind2])
        dp[ind1][ind2]=solve(ind1+1, ind2+1, s1, s2);
    dp[ind1][ind2]=min({dp[ind1][ind2],1+solve(ind1+1,ind2+1,s1,s2), 1+solve(ind1, ind2+1,s1,s2), 1+solve(ind1+1,ind2,s1,s2)});
    return dp[ind1][ind2];
}
int main()
{ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int test=1;
 //cin>>test;

 while(test--)
 {
    string s1, s2;cin>>s1>>s2;
    dp.assign(s1.length(),vi(s2.length(),-1));
    cout<<solve(0,0,s1,s2)<<endl;

 }
 return 0;
}

