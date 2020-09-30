#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
bool comp(pii a, pii b)
{
    if(a.f == b.f)
        return a.s<b.s;
    return a.f<b.f;
}
void solve()
{
    int n,k,p;
    cin>>n>>k>>p;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].f;
        a[i].s = i+1;
    }
    sort(a.begin(),a.end(),comp);
    map<int,int> comp;
    int no=0,i=0;
    while(i<n)
    {
        comp[a[i].s] = no;
        while(i+1<n && a[i].f+k>=a[i+1].f)
        {
            comp[a[i+1].s] = no;
            i++;
        }
        i++;
        no++;
    }
    while(p--)
    {
        int l,r; cin>>l>>r;
        if(comp[l]==comp[r])
            cout<<"Yes"<<endl;
        else
        {
            cout<<"No"<<endl;
        }
        
    }
}

int32_t main()
{
    
    solve();
    
    return 0;
}
