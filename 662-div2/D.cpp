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
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vc> a(n,vc(m)),up,down,l,r;
    l = r = up = down = a;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j==0)
                l[i][j]=1;
            else if(a[i][j]==a[i][j-1])
                l[i][j] += l[i][j-1];
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
                r[i][j] += r[i][j+1];
            else 
                r[i][j] = 1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
                up[i][j] = 1 + min()
        }
    }
    return 0;
}
