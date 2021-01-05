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
    int n,k;    cin>>n>>k;
    vector<int> a(n*k);
    for(int i=0;i<n*k;i++)
    {
        cin>>a[i];
    }
    int ind = n*k - (n+1)/2;
    int r = n-(n+1)/2+1; 
    int l = n-r; int sum = 0;
    for(int j = n*k-r,i=l; j>=i; j-=r,i+=l)
    {
        // cout<<a[j]<<" ";
        sum += a[j];
    }
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
