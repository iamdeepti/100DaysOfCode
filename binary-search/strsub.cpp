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
    int n,k,q; cin>>n>>k>>q;
    string str; cin>>str;
    vector<int> ones(n+1),zeros(n+1),far(n),pre(n+1);
    for(int i=0;i<n;i++)
    {
        ones[i+1] = (str[i]-'0')+ones[i];
        zeros[i+1] = i+1 - ones[i+1];
    }
    // far[i]  contains maximum index for substring starting at i
    // such that i,far[i] has at most k zeros and ones
    // for(int i=0;i<n;i++)
    // {
    //     int x1 = upper_bound(ones.begin()+i,ones.end(),ones[i]+k)-ones.begin()-1;
    //     int x2 = upper_bound(zeros.begin()+i,zeros.end(),zeros[i]+k)-zeros.begin()-1;
    //     far[i] = min(x1,x2)-1;
    // }

    // using 2 pointers
    int j = 0,count1=str[0]-'0',count0=0;
    count0 = 1-count1;
    for(int i=0;i<n;i++)
    {
        while(j<=n && count1<=k && count0<=k)
        {
            j++;
            if(j==n) break;
            if(str[j]=='0')   count0++;
            else count1++;
        }
        cout<<j-1<<"-"<<count0<<"-"<<count1<<"\t";
        far[i] = j-1;
        // decrement
        if(str[i]=='0')   count0--;
        else count1--;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        pre[i+1] = far[i]-i+1+pre[i];
    }
    while(q--)
    {
        int l,r; cin>>l>>r;
        r--;l--;
        int k = upper_bound(far.begin()+l,far.begin()+r,r)-far.begin()-1;
        cout<<pre[k+1]-pre[l]+((r-k))*r+(r-k)-(((r+k+1)*(r-k))/2)<<endl;
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
