#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
const int N = 5e3+1;
int lcs[N][N];
void findLCS(string a, string b)
{
    int ans = 0;
    memset(lcs,0,sizeof(lcs));
    for(int i=0;i<a.length();i++)
    {
        for(int j=0;j<b.length();j++)
        {
            if(a[i]==b[j])
                lcs[i+1][j+1] = max(lcs[i][j]+2,lcs[i+1][j+1]);
            else
            {
                lcs[i+1][j+1] = max(max(lcs[i+1][j],lcs[i][j+1])-1,(int)0);
            }
            ans = max(ans,lcs[i+1][j+1]);
        }
    }
    cout<<ans<<endl;
   
}
void solve()
{
    int n, m;   cin>>n>>m;
    string a, b;    cin>>a>>b;
    findLCS(a,b);
    
}

int32_t main()
{
    {
        solve();
    }
    return 0;
}
