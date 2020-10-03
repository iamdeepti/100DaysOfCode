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
    int n,m; cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(4));
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
    }
    if(m&1)
    {
        cout<<"NO"<<endl;
        return;
    }
    
    {
        for(int i=0;i<n;i++)
        {
            if(a[i][1]==a[i][2])
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
        return;
    }
    // cout<<"YES"<<endl;
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
