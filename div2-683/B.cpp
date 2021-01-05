#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    int neg  = 0,zero=0, minm = INT_MAX, sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) {   
            
            cin>>a[i][j];
            if(a[i][j]<0)   neg++;
            if(!a[i][j])    zero++;
            minm = min(abs(a[i][j]),minm);
            sum += abs(abs(a[i][j]));
        }
    }
    if(neg%2==0 || (zero>0))
    {
        cout<<sum<<endl;
        return;
    }
    sum = sum-2*minm;
    cout<<sum<<endl;
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
