#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
bool comp(pii a,pii b)
{
    if(a.f==b.f)
        return a.s>b.s;
    return a.f>b.f;
}
void solve()
{
    int n; cin>>n;
    vector<pii> sticks(n);
    for(int i=0;i<n;i++)
    {
        cin>>sticks[i].f>>sticks[i].s;
    }
    sort(sticks.begin(),sticks.end(),comp);
    // for(auto u: sticks)
    //     cout<<u.f<<" "<<u.s<<"\t";
    // cout<<endl;
    vector<int> curr;
    curr.pb(0);
    int prev = 0;
    for(int i=1;i<n;i++)
    {
        // while(i<n && sticks[i].f==sticks[prev].f)
        // {
        //     sticks[prev].s = max(sticks[prev].s,sticks[i].s);
        //     sticks[i].s = max(sticks[prev].s,sticks[i].s);
        //     i++;
        // }
        // if(i==n)    break;
        int low = 0,high = curr.size()-1,mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            int k = curr[mid];
            // cout<<low<<":"<<high<<"\t";
            if(sticks[k].s<sticks[i].s || sticks[k].f<sticks[i].f)
                low = mid+1;
            else
            {
                high = mid-1;
            }
            
        }
        // if(low==curr.size() || sticks[curr[low]].s>sticks[i].s)
        // low--;
        // cout<<low<<endl;
        if(low==curr.size())
            curr.pb(i);
        else
        {
            curr[low]=i;
        }
        
        // for(auto k:curr)
        //     cout<<sticks[k].f<<" "<<sticks[k].s<<"\t";
        // cout<<endl;
        prev = i;
    }
    cout<<curr.size()<<endl;
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
