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
    int n;cin>>n;
    int ans=0;
    while(n>0)
    {
        int max_dig=0;
        int temp=n;
        while(temp>0)
        {
            max_dig=max(max_dig,temp%10);
            temp/=10;
        }
        n-=max_dig;
        ans++;
    }
    cout<<ans<<endl;

 }
 return 0;
}

