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
    int n,k;    cin>>n>>k;
    string a, b; 
    cin>>a>>b;
    int mpa[26]={0}, mpb[26]={0};
    for(int i=0;i<n;i++)
    {
        mpa[a[i]-'a']++;
        mpb[b[i]-'a']++;
    }
    for(int i=0;i<25;i++)
    {
        if(mpa[i]!=mpb[i])
        {
            int p = mpa[i]-mpb[i];
            // cout<<p<<" "<<'a'+i<<endl;
            
            if(p<0 || (p%k)!=0)
            {
                cout<<"NO"<<endl;
                return;
            }
            mpa[i]-=p;
            mpa[i+1]+=p;
        }
    }
    if(mpa[25]!=mpb[25])
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;

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
