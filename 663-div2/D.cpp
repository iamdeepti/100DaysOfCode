#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<int>
const int N = 5e5+1;
bool ok3[8][8],ok2[4][4];
int a[3][N];
int dp[N][8];
int n,m;
int setbits(int n)
{
    int i=0;
    while(n)
    {
        n = n&(n-1);
        i++;
    }
    return i;
}
void solve3()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if((setbits(i&6)+setbits(j&6))&1 && (setbits(i&3)+setbits(j&3))&1)
                ok3[i][j] = true;
            else
                ok3[i][j] = false;
            // if(ok3[i][j])
            //     cout<<i<<" "<<j<<endl;
        }
    }
    for(int i=0;i<m;i++)
    {
        int mask = a[0][i] + a[1][i]*2 + a[2][i]*4;
        for(int curr=0;curr<8;curr++)
        {
            dp[i][curr] = 1e9;
            for(int prev=0;prev<8;prev++)
            {
                if(!ok3[curr][prev])
                    continue;
                if(i==0)
                    dp[i][curr] = min(dp[i][curr],setbits(curr^mask));
                else
                    dp[i][curr] = min(dp[i][curr],dp[i-1][prev]+setbits(curr^mask));
            }
        }
    }
    int ans=1e9;
    for(int i=0;i<8;i++)
        ans = min(ans,dp[m-1][i]);
    cout<<ans<<endl;
}
void solve2()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((setbits(i)+setbits(j))&1)
                ok2[i][j] = true;
            else
                ok2[i][j] = false;
        }
    }
    for(int i=0;i<m;i++)
    {
        int mask = a[0][i] + a[1][i]*2;
        for(int curr=0;curr<4;curr++)
        {
            dp[i][curr] = 1e9;
            for(int prev=0;prev<4;prev++)
            {
                if(!ok2[curr][prev])
                    continue;
                if(i==0)
                    dp[i][curr] = min(dp[i][curr],setbits(curr^mask));
                else
                    dp[i][curr] = min(dp[i][curr],dp[i-1][prev]+setbits(curr^mask));
            }
        }
    }
    int ans=1e9;
    for(int i=0;i<4;i++)
        ans = min(ans,dp[m-1][i]);
    cout<<ans<<endl;
}

void solve()
{
    
    cin>>n>>m;
    if(min(n,m)>3)
    {
        cout<<"-1"<<endl;
        return;
    }
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int j=0;j<m;j++)
            a[i][j] = s[j]-'0';
    }
    if(n==3)
    {
        solve3();
        return;   
    }
    solve2();
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}
