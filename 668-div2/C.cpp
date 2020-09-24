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
    string str; cin>>str;
    for(int i=0;i<k;i++)
    {
        if(str[i]=='?')
        {
            for(int j=k+i;j<n;j+=k)
            {
                if(str[j]!='?')
                {
                    str[i]=str[j];
                    break;
                }
            }
        }
    }
    int z=0,o=0,u=0;
    for(int i=0;i<k;i++)
    {
        if(str[i]=='0')
            z++;
        if(str[i]=='?')
            u++;
    }
    o = k-z-u;
    if(z>k/2 || o>k/2)
    {
        cout<<"NO"<<endl;
        return;
    }
    // cout<<str<<endl;
    for(int i=k;i<n;i++)
    {
        // if(str[i]=='0') z++;
        // else if(str[i]=='1')o++;
        // else u++;
        // if(str[i-k]=='0') z--;
        // else if(str[i-k]=='1')o--;
        // else u--;
        // cout<<z<<" "<<u<<" "<<o<<" "<<i-k<<"to"<<i<<endl;
        // if(z+u-o<0 && (z+u-o)&1)
        // {
        //     cout<<"NO--"<<endl;
        
        //     return;
        // }
        if(str[i]==str[i%k] || str[i]=='?' || str[i%k]=='?')    continue;
        cout<<"NO"<<endl;
        // cout<<i<<endl;
        return;
    }
    cout<<"YES"<<endl;
    
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
