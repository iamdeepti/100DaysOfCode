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
        string s;
        cin>>s;
        // ll a=0,b=0,c=0;
        int n = s.length();
        int i=0;
        vector<pii> a;
        for(int i=0;i<n;i++)
        {
            int j = i+1;
            // if(a[i]==a[i-1])
            {
                while(j<n && s[j]==s[i])
                    j++;
                a.pb(mp(s[i]-'0',j-i));
            }
            i = j-1;
        }
        int ans = INT_MAX;
        int N = a.size();
        for(int i=0;i<N-2;i++)
        {
            if(a[i].f != a[i+1].f && a[i+1].f !=a[i+2].f && a[i+2].f !=a[i].f)
                ans = min(ans,2+a[i+1].s);
        }
        if(ans==INT_MAX)
            ans = 0;
        cout<<ans<<endl;
    }
    return 0;
}