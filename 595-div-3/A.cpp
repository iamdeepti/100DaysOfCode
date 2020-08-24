#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        bool f=false;
        int i;
        for( i=1;i<n;i++)
        {
            if(a[i] == a[i-1]+1)
            {
                break;
            }
        }
        if(i==n)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}