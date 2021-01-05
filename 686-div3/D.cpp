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
    int n;  cin>>n;
    int ans = 0, len = 0,temp = n;
    for(int i=2;i*i<=n;i++)
    {
        int curr = 0;
        while(temp%i == 0)
        {
            curr++;
            temp = temp/i;

        }
        if(curr>len)
        {
            len = curr;
            ans = i;
        }
    }
    if(ans == 0)
    {
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    cout<<len<<endl;
    while(n%ans==0)
    {
        n/=ans;
        if(n%ans==0)
        cout<<ans<<" ";
        
    }
    cout<<n*ans<<endl;
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
