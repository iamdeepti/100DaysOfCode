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
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<vector<bool>> walk(n,vector<bool>(m,false));
    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(i==n-1 && j==m-1)
            {
                walk[i][j] = true;
            }
            else if(a[i][j]=='R' && (j==m-1 || !walk[i][j+1]))
            {
                ans++;
                // cout<<i<<" "<<j<<endl;
                walk[i][j]=true;
            }
            else if(a[i][j]=='D' && (i==n-1 || !walk[i+1][j])){
                ans++;
                // cout<<i<<" "<<j<<endl;
                
                walk[i][j]=true;
            }
            else{
                walk[i][j] = true;
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
