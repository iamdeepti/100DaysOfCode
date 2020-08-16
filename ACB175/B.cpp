#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<int>
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])  continue;
            for(int k=j+1;k<n;k++)
            {
                if(a[j]==a[k]|| a[i]==a[k])  continue;
                if(a[i]+a[j]>a[k] && a[j]+a[k]>a[i] && a[k]+a[i]>a[j])
                {    ans++;
                    // cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
