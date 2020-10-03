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
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    vector<int> curr;
    curr.pb(a[0]);
    for(int i=1;i<n;i++)
    {
        int high= curr.size()-1,low=0,mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(curr[mid]>a[i])
                high = mid-1;
            else
            {
                low = mid+1;
            }
            
        }
        if(low == curr.size())
            curr.pb(a[i]);
        else
        {
            curr[low] = a[i];
        }
        
    }
    cout<<curr.size()<<" ";
    for(auto u:curr)
        cout<<u<<" ";
    cout<<endl;
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
