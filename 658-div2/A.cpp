#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        map<int,int> a;
        // vector<int> b(m);
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a[x]++;
        }
        bool flag = false;
        int ans = -1;
        for(int i=0;i<m;i++)
        {
            cin>>x;
            if(a.count(x)>0)
            {
                // cout<<a.count(x)<<" ";
                flag=true;
                ans = x;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<ans<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
