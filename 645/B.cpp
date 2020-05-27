#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int count=1;
        int l=0,r=0,curr=1;
        for(int i=0;i<n;i++)
        {
            // int j=i+1;
            // while(j<n && a[j]==a[i]) j++;
            // if(count + (j-i)>=a[i]+1)
            //     count += (j-i);
            // cout<<count<<" "<<i<<":"<<j<<endl;
            // i = j-1;
            
            if(curr>=a[i])
            {
                // l = i+1;
                // r=l;
                //curr++;
                count = curr+1;
            }
            curr++;

        }
        cout<<count<<endl;
    }
}