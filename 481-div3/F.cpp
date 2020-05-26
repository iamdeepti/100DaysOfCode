#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define f first
#define s second
#define mk make_pair
#define pb push_back
#define vi vector<int>
bool comp(pii a,pii b)
{
    return a.f<b.f;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,k,x,y;cin>>n>>k;
    vector<pii> r;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        r.pb(mk(x,i));
    }
    
    //vector<pii> f(k);
    // map<int,int> mp;
    vi res(n);
    for(int i=0;i<k;i++)
    {
        cin>>x>>y;
        //f[i] = mk(x,y);
        if(r[x-1].f<r[y-1].f)
            res[y-1]--;
        else if(r[y-1].f<r[x-1].f)
            res[x-1]--;
    }
    sort(r.begin(),r.end(),comp);
    
    int i=0;
    while(i<n)
    {
        int j = i;
        while(i<n && r[i].f==r[j].f)
        {
            res[r[i].s] += j;
            i++;
        }
    }
    for(auto x:res)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}