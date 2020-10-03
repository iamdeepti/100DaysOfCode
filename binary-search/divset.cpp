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
    int n,k,c; cin>>n>>k>>c;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    sort(a.begin(),a.end());
    vector<bool> vis(n);
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(vis[i])  continue;
        int cnt = k,curr=i;
        while(cnt--)
        {
            int low = curr+1,high = n-1,mid;
            vis[curr] = true;
            while(low<=high)
            {
                mid = (low+high)/2;
                if(a[mid]<a[curr]*c || vis[mid])
                    low = mid+1;
                else
                {
                    high = mid-1;
                    
                }
                
            }
            if(low==n+1)
            {
                cout<<ans<<endl;
                return;
            }
            else
            {
                curr = low;
            }
            
        } 
        ans++;
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
