#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve(int n)
{
    vector<pii> a(n);
    for(int i=0;i<n;i++)
    {    
        cin>>a[i].f;
        a[i].s = i;
    }
    sort(a.begin(),a.end());
    int globalMinm = a[0].f;
    
    vector<bool> vis(n,false);
    int components=0;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(!vis[a[i].s])
        {
            int j = a[i].s;
            pii k = {-1,-1};
            int sum = 0;
            components=-1;
            while(!vis[j])
            {
                // cout<<a[j].f<<" ";

                vis[j]=true;
                k = a[j];
                sum += a[j].f;
                components++;
                
                // vis[a[i].s]=true;
                // vis[k.s] = true;
                j = a[j].s;
            }
            sum -= a[i].f;
            ans += min(sum+components*a[i].f,2*(a[0].f+a[i].f)+sum+components*a[0].f);
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    int n; cin>>n;
    int k = 1;
    while(n)
    {
        cout<<"Case "<<k<<": ";
        solve(n);
        cin>>n;
        k++;
        cout<<"\n";
    }
    return 0;
}
