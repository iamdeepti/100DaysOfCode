#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
const int N = 16;
int a[N];
int dp[N][1<<N];
int times[N][1<<N];
int rec(int curr, int mask, int n)
{
    if(dp[curr][mask]!=-1)
        return  dp[curr][mask];
    for(int i=0;i<n;i++)
    {
        // if element is not in set already then include it
        if((mask &(1<<i))==0)
        {
            // if it's the last one then add a[i]-- edge
            if((mask|(1<<i))==((1<<n)-1))
            {
                dp[curr][mask] = abs(a[i]-a[curr])+a[i];
                times[curr][mask]=1;
                return dp[curr][mask];
            }
            int val = rec(i,(mask|(1<<i)),n) + abs(a[i]-a[curr]);
            if(dp[curr][mask]<val)
            {
                dp[curr][mask] = val;
                times[curr][mask]=0;
            }
             if(dp[curr][mask]==val)
            {
                times[curr][mask] += times[i][(mask|(1<<i))];
            }
        }
    }
    return dp[curr][mask];
}
void solve(int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(1<<n);j++)
        {    
            dp[i][j]=-1;    times[i][j]=0;
        }
    }
    int ans = 0, cc=0;
    for(int i=0;i<n;i++)
    {
        int val = rec(i,(1<<i),n)+a[i];
        if(ans<val)
        {
            cc=times[i][(1<<i)];
            ans = val;
        }
        else if(ans == val)
        {
            cc += times[i][(1<<i)];
        }
    }
    cout<<ans+2*n<<" "<<cc<<"\n";
}

int32_t main()
{
    int n;
    cin>>n;
    while(n)
    {
        solve(n);
        cin>>n;
    }
    return 0;
}
