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
int solve(int r, int c, vector<vector<char>> &grid)
{
    if(r==grid.size()||c==grid[0].size())
        return 0;
    if(grid[r][c]=='*')
        return 0;
    if(r==grid.size()-1&&c==grid[0].size()-1)
        return 1;

    if(dp[r][c]==-1)
    {
        dp[r][c]=((long)solve(r+1,c,grid)+(long)solve(r,c+1,grid))%mod;
    }
    return dp[r][c];

}
int main()
{ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int test=1;
 //cin>>test;
 while(test--)
 {
    int n;cin>>n;
    vector<vector<char>> grid(n,vector<char>(n));
    dp.assign(n, vi(n,-1));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>grid[i][j];
    cout<<solve(0,0,grid);
 }
 return 0;
}

