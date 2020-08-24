#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
// int f[200001];
#define pii pair<int,int>
#define f first
#define s second
#define mp make_pair
// /}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vi a(n);
        // memset(f,0,sizeof(f));
        vi f(n+1);
        for(int i=0;i<n;i++)
        {
            
            cin>>a[i];
            f[a[i]]++;
        }
        // int ans = 0;
        // set<pii,comp> s;
        // for(int i=1;i<=n;i++)
        // {
        //     ans += f[i]/i;
        //     f[i] = f[i]%i;
        //     s.insert(mp(i-f[i],i));
        // }
        // for(auto x:s)
        // {
        //     pii a = *s.begin();
        //     pii b = *s.end();

        // }
        // vi pre(n+1);
        // for(int i=1;i<=n;i++)
        // {
        //     pre[i] += f[i] + pre[i-1];
        // }
        // for(int i=1;i<=n;i++)
        // {

        // }
        sort(a.begin(),a.end());
        int i=0,curr=0;
        int k=1;
        while(i<n)
        {
            //int m=0,k=i,p=0;
            int k = i,req=0,el=0;
            while( i<n)
            {
                el++;
                req= a[i]-el;
                i++;
                if(req==0)
                {
                    curr++;
                    break;
                }
            }
            // if(req==0)
            //     curr++;
        }
        cout<<curr<<endl;
    }
}