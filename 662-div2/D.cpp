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
#define vc vector<char>
void print(vector<vi> k)
{
    for(auto x:k)
    {
        for(auto j:x)
            cout<<j<<" ";
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    vector<vi>up(n,vi(m)),down,l,r;
    l = r = down = up; 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j==0)
                l[i][j]=1;
            else if(a[i][j]==a[i][j-1])
                l[i][j] = 1+l[i][j-1];
            else 
                l[i][j] = 1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(j==m-1)
                r[i][j]=1;
            else if(a[i][j]==a[i][j+1])
                r[i][j] = 1+r[i][j+1];
            else 
                r[i][j] = 1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j==0 || i==0 || j==m-1)
                up[i][j]=1;
            else if(a[i][j]==a[i][j-1] && a[i][j]==a[i][j+1] && a[i][j]==a[i-1][j])
                up[i][j] = 1 + min(l[i][j-1],min(r[i][j+1],up[i-1][j]));
            else
                up[i][j]=1;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(j==0 || j==m-1 || i==n-1)
                down[i][j]=1;
            else if(a[i][j]==a[i][j-1] && a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j])
                down[i][j] = 1 + min(l[i][j-1],min(r[i][j+1],down[i+1][j]));
            else
                down[i][j] = 1;
        }
    }
    // print(l);print(r);print(up);print(down);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans += min(up[i][j],down[i][j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
