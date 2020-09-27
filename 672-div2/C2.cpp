#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
bool minima(int i, vector<int> &a)
{
    int n = a.size();
    int prev = (i>=1)?a[i-1]:-1e9;
    int next = (i<n-1)?a[i+1]:-1e9;
    if(a[i]<prev && a[i]<next)
        return true;
    return false;
}
bool maxima(int i, vector<int> &a)
{
    int n = a.size();
    int prev = (i>=1)?a[i-1]:-1e9;
    int next = (i<n-1)?a[i+1]:-1e9;
    if(a[i]>prev && a[i]>next)
        return true;
    return false;
}
void solve()
{
    int n,q; cin>>n>>q;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0, k =0,sz=0;
    int ans=0,res=0;
    while(i<n)
    {
        if(!k) // choose maxima
        {
            while(i+1<n && a[i+1]>=a[i]) i++;
            b[i] = 1;
            ans += a[i];
            sz++;
        }
        else
        {
            while(i+1<n && a[i+1]<=a[i]) i++;
            b[i] = -1;
            ans -= a[i];
            sz++;
        }
        res = max(ans,res);
        i++;
        k = k^1;
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--; r--;
        res = res - b[l]*a[l] -b[r]*a[r];
        swap(a[l],a[r]);
        if(minima(l,a))
        {

        }
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
