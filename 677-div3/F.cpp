#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
const int N=71;
int dp[N][N][N][N];
void solve()
{
    int n,m,K; cin>>n>>m>>K;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    // dp[i][j][k][m] -> maximum sum till i,j having remainder k when divided by K & no
    // of elements = m
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
        }
    }
}

int32_t main()
{
    // int t;	cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}
