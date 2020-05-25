#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define f first
#define s second
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vi a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int ans = INT_MAX;
        for(int i=1;i<n;i++)
        {
            ans = min(ans,a[i]-a[i-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}