#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    int n; cin>>n;
    vector<int> a(n),res(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    // res[0]=a[1];
    // res[1] =a[0];
    // for(int i=2;i<n;i++)
    // {
    //     res[i] = a[i]+a[i-1]-res[i-1];
    // }
    // for(auto x:res)
    //     cout<<x<<" ";
    reverse(a.begin(),a.end());
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
