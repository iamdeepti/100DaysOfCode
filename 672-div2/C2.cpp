#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<int> a;
void erase(int i,  int &res)
{
    if(a[i]<a[i+1] && a[i]<a[i-1])  res += a[i];
    if(a[i]>a[i+1] && a[i]>a[i-1])  res -= a[i];
    // cout<<"erased "<<a[i]<<" ";
    // cout<<res<<endl;
}
void insert(int i,  int &res)
{
    if(a[i]<a[i+1] && a[i]<a[i-1])  res -= a[i];
    if(a[i]>a[i+1] && a[i]>a[i-1])  res += a[i];
    // cout<<"inserted "<<a[i]<<" ";
    // cout<<res<<endl;
}

bool minima(int i, vector<int> &a)
{
    if(a[i]<a[i+1] && a[i]<a[i-1])
        return true;
    return false;
}
bool maxima(int i, vector<int> &a)
{
    if(a[i]>a[i+1] && a[i]>a[i-1])
        return true;
    return false;
}
void solve()
{
    int n,q; cin>>n>>q;
    a.resize(n+4);
    for(int i=2;i<=n+1;i++)
        cin>>a[i];
    int i=2, k =0,sz=0;
    int ans=0,res=0;
    
    while(i<=n+1)
    {
        if(maxima(i,a))
        {
            
            // cout<<a[i]<<" is maxima"<<endl;
            res += a[i];
        }
        else if(minima(i,a))
        {
            
            // cout<<a[i]<<" is minima"<<endl;
            res -= a[i];
        }
        
        i++;
    }
    cout<<res<<endl;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l++;r++;
        // l--; r--;
        erase(l-1,res);erase(l+1,res);erase(l,res);
        if(r-1 >l+1)    erase(r-1,res);
        if(r+1 > l+1)   erase(r+1,res);
        if(r> l+1)  erase(r,res);
        
        swap(a[l],a[r]);
        insert(l-1,res);insert(l+1,res);insert(l,res);
        
        if(r-1>l+1)    insert(r-1,res);
        if(r+1>l+1)    insert(r+1,res);
        if(r>l+1)   insert(r,res);
        cout<<res<<endl;
    }
    a.clear();
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
