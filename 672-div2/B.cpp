#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
int bit(int pos,int num)
{
     if(((1<<pos)&num)!=0)
        return 1;
    return 0;
}
void solve()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<bool> vis(n,false);
    int ans=0;
    for(int i=31;i>=0;i--)
    {
        int k = 0;
        for(int j=0;j<n;j++)
        {
            if(!vis[j] && bit(i,a[j])){
                k++;
                vis[j] = true;
            }
        }
        ans += (k*(k-1))/2;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    int t;	cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
