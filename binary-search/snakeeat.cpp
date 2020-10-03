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
    int n,q; cin>>n>>q;
    vector<int> a(n),pre(n+1);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    pre[n] = 0;
    for(int i = n-1;i>=0;i--)
        pre[i] = pre[i+1]-a[i];
    while(q--)
    {
        int k; cin>>k;
        int ans = 0;
        int i = lower_bound(a.begin(),a.end(),k)-a.begin();
        ans = n-i;
        // cout<<i<<" ";
        if(i==0)
            continue;
        // i--;
        int j = 0;
        int low =0,high = i-1,mid;
        // while(i>=0 && j<n && j+(k-a[i])<=i)
        // {
        //      ans++;
             
        //     j = j+ (k-a[i]);
        //     // cout<<i<<" "<<j<<endl;
        //     i--;
        // }
        // cout<<i<<endl;
        while(low<=high)
        {
            mid = (low+high)/2;
            int p = pre[mid]-pre[i]+k*(i-mid);
            // cout<<p<<"->"<<mid<<"\t";
            if(p<=mid)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
            
        }
        // cout<<endl;
        ans += (i-low);
        cout<<ans<<endl;
    }
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
