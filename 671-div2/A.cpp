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
    int n; cin>>n;
    string str; cin>>str;
    int b=0,r=0;
    if(n==1)
    {
        if((str[0]-'0')&1)
            cout<<1<<endl;
        else
        {
            cout<<2<<endl;
        }
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(i&1){
            if(((str[i]-'0')&1) ==0) b++;
        }
        else{
            if((str[i]-'0')&1) r++;
        }
    }
    // cout<<r<<" "<<b<<endl;
    if(r>b) cout<<1<<endl;
    else if(b>r)
    {
        cout<<2<<endl;
    }
    else if(n&1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
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
