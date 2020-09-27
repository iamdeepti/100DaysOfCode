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
    vector<int> a(n),b;
    for(int i=0;i<n;i++)    cin>>a[i];
    int cnt=0;
    b = a;
    // int k = count(a.begin(),a.end(),a[0]);
    
    sort(b.begin(),b.end());
    for(int i=1;i<n;i++)
    {
        if(b[i]==b[i-1])
        {
            // if(k)
    {
        cout<<"YES"<<endl;
            return;
    }
        }
    }
    reverse(b.begin(),b.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
