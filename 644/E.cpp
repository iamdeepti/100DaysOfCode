#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define f first
#define s second
bool mark(vector<vector<bool>> &vis, vector<vi> &a,int n,int i, int j)
{
    if(i==n-1 || j== n-1)
        vis[i][j]=true;
    // if(vis[i][j])
    //     return;
    if(i+1<n && vis[i+1][j])
        vis[i][j]=true;
    if(j+1<n && vis[i][j+1])
        vis[i][j]=true;
    vis[i][j]=false;
    return vis[i][j];
}
bool check(vector<string> &a,int i,int j,int n)
{
    if(i==n-1 || j== n-1)
        return true;
    // if(vis[i][j])
    //     return;
    if(i+1<n && a[i+1][j]=='1')
        return true;
    if(j+1<n && a[i][j+1]=='1')
        return true;
    // vis[i][j]=false;
    // return vis[i][j];
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> a(n);
        for(int i=0;i<n;i++)
        {
            // a[i].resize(n);
            // for(int j=0;j<n;j++)
                cin>>a[i];

        }
        // vector<vector<bool>> vis(n,false);
        // for(int i=0;i<n;i++)
        // {
        //     vis[i].resize(n);
        //     // vis[n-1][i]=true;
        //     // vis[i][n-1]=true;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     // vis[i].resize(n);
        //     vis[n-1][i]=true;
        //     vis[i][n-1]=true;
        // }
        bool f= false;
        for(int i=n-1;i>=0;i--)
        {
            
            for(int j=n-1;j>=0;j--)
            {
                // if(a[i][j]==1 && !mark(vis,a,n,i,j))
                // cout<<i<<" "<<j<<endl;
                if(a[i][j]=='1' && !check(a,i,j,n))
                 {   cout<<"NO"<<endl;
                    f = true;
                    break;
                 }
            }
            if(f)
                break;
        }
        if(!f)
            cout<<"YES"<<endl;


    }
    return 0;
}