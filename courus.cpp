#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[26];
    while(t--)
    {
        memset(a,0,sizeof(a));
        int n,q;
        cin>>n>>q;
        char ch;
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>ch;
            if(a[ch-'a']==0)
                count++;
            a[ch-'a']++;
        }
        sort(a,a+26);
        //int minm=INT_MAX;
        // for(int i=0;i<26;i++)
        // {
        //     if(a[i])
        //         minm = min(a[i],minm);
        // }
        while(q--)
        {
            int c;
            cin>>c;
            //cout<<max(0,n-count*c)<<endl;
            // if(c<=minm)
            //     cout<<n-count*c<<endl;
            // else
            // {
                
            // }
            int ans=n,i=0;
            while(i<26 && !a[i])
             i++;
            int rm=0;
            while(c>0 && i<26)
            {
                //cout<<ans<<" "<<c<<" "<<(a[i]-rm)<<" "<<(26-i)<<endl;
                if(c>=(a[i]-rm))
                {    ans = ans - (a[i]-rm)*(26-i);
                 c -= (a[i]-rm);
                    rm = a[i];
                   
                }
                else
                {
                    ans = ans - c*(26-i);
                    rm += c;
                    c=0;
                }
                //c = c-rm;
                int curr=i;
                while(i<26 && a[i]==a[curr])
                    i++;
            }
            //cout<<ans<<" "<<c<<" "<<(a[i]-rm)<<" "<<(26-i)<<endl;
                
            cout<<ans<<endl;
        }
    }
    return 0;
}