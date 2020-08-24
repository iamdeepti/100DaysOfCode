#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
            cin>>a[i];
        int count = 0;
        bool f = false;
        for(int i=0;i<n;i++)
        {
            // cout<<i<<" ";
            if(a[i]==i+1)
            {    count++;
                f = true;
            }
            while(i<n && a[i]==i+1)
            {
                if(i==n-1)
                {
                    count--;
                    f = false;
                    break;
                }
                i++;
            }
            if(f)
            {
                i--;
                f = false;
            }
        }
        if(count==0)
            cout<<0<<endl;
        else
        cout<<count+1<<endl;
    }


}