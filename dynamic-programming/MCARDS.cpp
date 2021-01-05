#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<vector<int>> permutations;
int dp[401]={0};
int fact(int n)
{
    int k = 1;
    for(int i=1;i<=n;i++)
        k = k*i;
    return k;
}
void solve()
{
    int c,n; cin>>c>>n;
    int m = fact(c);
    vector<pii> cards(n*c);
    for(int i=0;i<n*c;i++)
    {
        cin>>cards[i].s>>cards[i].f;
    }
    vector<int> temp;
    for(int i=1;i<=c;i++)   temp.pb(i);
    permutations.pb(temp);
    int k = 0;
    for(int i=2;i<=m;i++)
    {
        permutations.pb(permutations[k]);
        k++;
        next_permutation(permutations[k].begin(),permutations[k].end());
    }
    dp[0]=1;
    int ans = 1;
    for(int k=0;k<m;k++)
    {
        // find lis having color in permutations[i] order
        for(int i=1;i<n*c;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(cards[i].s == cards[j].s && cards[i].f>cards[j].f)
                    dp[i] = max(dp[i],dp[j]+1);
                else{
                    int p;
                    for(p=0;p<c;p++)
                    {
                        if(permutations[k][p]==cards[i].s)
                            break;
                    }
                    if(p==0)
                        continue;
                    for(int l = 0;l<p;l++)
                    {if(cards[j].s == permutations[k][l])
                    {    dp[i] = max(dp[i],dp[j]+1);
                    
                    }}
                }
            }
            ans = max(dp[i],ans);
        }
    }
    cout<<n*c-ans;
}

int32_t main()
{
   {
        solve();
    }
    return 0;
}
