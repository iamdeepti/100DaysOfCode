#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        long long ans=0;
        ll j=0;
        ll i=1;
        for(i=1;i<=n;i+=2)
        {
            //cout<<(1ll)*4*(i-1)*j<<" ";
            ans += 4*(i-1)*j;
            j++;
        }
        //cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}