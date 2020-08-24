#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define f first
#define s second
#define mk make_pair
#define pb push_back
typedef long long ll;
int a[201]={0};
bool comp(pair<int,pii>b,pair<int,pii> c)
{
    if(b.s.f==c.s.f)
        return b.s.s>c.s.f;
    return b.s.f<c.s.f;
}
int main()
{
    int n,k,x,y;
    cin>>n>>k;
    vector<pair<int,pii>> seg(n);
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        seg[i] = mk(i+1,mk(x,y));
        for(int j=x;j<=y;j++)
            a[j]++;
    }
    sort(seg.begin(),seg.end(),comp);
    vector<int> res;
    // for(int i=0;i<n;i++)
    // {
    //     for(int p=seg[i].s.f;p<=seg[i].s.s;p++)
    //     if(a[p]>k)
    //     {
    //         res.pb(seg[i].f);
    //         for(int j=seg[i].s.f ;j<=seg[i].s.s;j++)
    //             a[j]--;
    //     }
    // }
    // int j=0;
    // for(int i=200;i>0;i--)
    // {
    //     while(a[i]>k)
    //     {
    //         int j=0;
    //         int x = 0;
    //         while(j<n && seg[j].s.f > i)
    //         {
    //             // if()
    //             j++;
    //         }
    //         x=j;
    //         while(x<n && seg)
    //         cout<<j<<" "<<i<<" "<<seg[j].f<<endl;
    //         seg.erase()
    //         for(int p =seg[j].s.f;p<=seg[j].s.s;p++)
    //             a[p]--;
    //         res.pb(seg[j].f);
    //         j++;
    //     }
    // }
    int j=0;
    for(int i=1;i<=200;i++)
    {
        while(a[i]>k)
        {
            int x=j;
            while(j<n && seg[j].s.s<i)
            {
                if(seg[j].s.s-i > seg[x].s.s - i)
                    x = j;
                j++;
            }
        }
    }
    for(auto x:res)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}