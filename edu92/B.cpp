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
void solve()
{
    int n,k,z;
    cin>>n>>k>>z;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum = 0;
    for(int i=0;i<=k;i++)
        sum = sum + 1ll*a[i];
    bool f = true;
    // cout<<sum<<" ";
    int j=k;
    while(f && z>0 && j>=2)
    {
        f = false;
        int x = a[j]+a[j-1];
        for(int i=0;i<j;i++)
        {
            if(a[i]+a[i+1]>x)
            {
                x = a[i]+a[i+1];
                f= true;
            }
        }
        int y=0;
        // if(j>=2)
        // {
        //     y = a[j]+a[j-1]+a[j-2];
        //     for(int i=0;i<j-1;i++)
        //     {
        //         if(a[i]+a[i+1]+a[i+2]>y)
        //         {
        //             y = a[i]+a[i+1]+a[i+2];
        //             f= true;
        //         }
        //     }
        // }
        if(f){
        if(x>=y-a[j-2] || z<2 || j<3 )
        {
            z--;
            sum = sum-a[j-1]-a[j]+x;
            // cout<<x<<" "<<a[j-1]+a[j]<<" x ";
            j = j-2;
        }
        else
        {
            z=z-2;
            sum = sum-a[j-1]-a[j]-a[j-2]+y;
            
            
            // cout<<y<<" "<<a[j-1]+a[j]+a[j-2]<<" y ";
            j = j-3;
        }
        }
        // cout<<sum<<" "<<x<<" "<<y<<" "<<j<<endl;
        // cout<<sum<<endl;
    }
    cout<<sum<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
