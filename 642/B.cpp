#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long ans = 0;
        for(int i=k;i<n;i++)
            ans += a[i];
        int count = 0;
        int i=k-1,j=n-1;
        while(count<k)
        {
            if(i>=0 && a[i]>b[j])
            {
                ans += a[i];
                i--;
            }
            else{
                ans += b[j];
                j--;
            }
            count++;
        }
        cout<<ans<<endl;
    }
    return 0;
}