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
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    // sort(a.begin(),a.end());
    // int mx = a[n-1];
    // if(sum%(n-1)==0 && sum>=mx)
    // {
    //     cout<<0<<endl;
    // }
    // int zeros = count(a.begin(),a.end(),0);
    // int p = sum%(n-1);
    // int nsum=0;
    // p = n-1-p;
    // nsum = (p!=0)?sum+p:sum;
    int mx = *max_element(a.begin(),a.end());
    if(mx*(n-1)>=sum)
    {
        cout<<mx*(n-1)-sum<<endl;
        return;
    }
    int y = (sum+n-2)/(n-1) - mx;
    mx += y;
    cout<<mx*(n-1)-sum<<endl;
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
