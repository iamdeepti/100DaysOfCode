#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
bool comp(pii x,pii y)
{
  if(abs(x.s-x.f) == abs(y.s-y.f))
  {
    if(x.f==y.f)
      return x.s>y.s;
    return x.f>y.f;
  }
  return abs(x.s-x.f)>abs(y.s-y.f);
}
void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<pii> a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i].f;
    }
    for(int i=0;i<n;i++)
    {
      cin>>a[i].s;
    }
    int ans=0;
    sort(a.begin(),a.end(),comp);
    int i=0;
    while(i<n)
    {
      if(x && a[i].f>a[i].s)
      {
        ans += a[i].f;
        x--;
      }
      else if(y && a[i].f<a[i].s)
      {
        ans += a[i].s;
        y--;
      }
      else if(x)
      {
        ans += a[i].f;
        x--;
      }
      else
      {
        ans += a[i].s;
        y--;
      }
      i++;
    }
    cout<<ans<<endl;
}

int32_t main()
{
  // int t;	cin>>t;
  // while(t--)
  // {
    solve();
  // }
  return 0;
}
