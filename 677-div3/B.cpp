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
    int n ; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> left(n),right(n);
    right[0] = 0;
    left[n-1] = 0;
    // for(int i=1;i<n;i++)
    // {
    //     left[i] = left[i-1]+((a[i])?0:;
    // }
    // for(int i=n-2;i>=0;i--)
    // {
    //     right[i] = right[i+1]+((a[i])?0:1);
    // }
    // for(auto x:left)
    //     cout<<x<<" ";
    // cout<<endl;
    int ans = INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        int curr = 0,j=0,k=0;
        while(j<i && !a[j]) j++;
        while(j<i)
        {
            while(j<i && !a[j]){  
                   curr++;
                j++;
            }
            j++;
            k=1;
        }
        
        j = n-1;
        k=0;
        while(j>=i && !a[j]) j--;
        while(j>=i)
        {
            while(j>=i && !a[j])
            {
                   curr++;
                j--;
            }
            j--;
            k=1;
        }
        // cout<<i<<" "<<curr<<endl;
        ans = min(ans,curr);
    }
    // for(int i=0;i<n;i++)
    // {
    //     ans = min(ans,left[i]+right[i]);
    // }
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
