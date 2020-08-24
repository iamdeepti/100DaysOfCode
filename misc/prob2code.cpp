#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    //int a[3],b[3];
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n),b(n); 
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        //for(int i=0;i<n;i++)
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        for(int j=0;j<n;j++)
            cout<<b[j]<<" ";
        cout<<endl;
        
        ll i=0,j=0;
        ll count = 0;
        while(i<n && j<n)
        {
            while(i<n && j<n && a[i]<=b[j])
            {
                i++;
            }
            cout<<i<<" "<<j<<endl;
            j++;
            i++;
            count++;
        }
        cout<<count<<endl;
    }
}