#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define s second
#define f first
int n,m,k;
bool comp(pii a,pii b)
{
    if(a.f%m == b.f%m)
        return a.f<b.f;
    if(a.f%m==0)
        return false;
    return (a.f%m)<(b.f%m);
}
int main()
{
    int x;
    cin>>n>>m;
    k = n/m;
    vi c(m+1);
    vector<pii> a(n);
    for(int i=0;i<n;i++)
    {
        // cin>>a[i];
        cin>>x;
        if(x%m==0)
            c[m]++;
        else
        c[x%m]++;
        a[i] = make_pair(x,i);
    }
    sort(a.begin(),a.end(),comp);
    int ans=0,j=0;
    for(auto x:a)
        cout<<x.f<<":"<<x.s<<" ";
    cout<<endl;
    for(auto x:c)
        cout<<x<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        while(j<n && c[a[j].f%m]<=k)
            j++;
        if(c[a[i].f%m]<k)
        {
            c[a[i].f%m]++;
            c[a[j].f%m]--;
            a[j].f += abs(a[i].f%m-a[j].f%m);
            j++;
            ans += abs(a[i].f%m-a[j].f%m);
        }
    }
    cout<<ans<<endl;
    vi res(n);
    for(auto x:a)
    {
        res[x.s] =x.f;
    }
    for(auto x:a)
        cout<<x.f<<":"<<x.s<<" ";
    cout<<endl;
    for(auto x:res)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
