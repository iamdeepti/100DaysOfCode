#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans = 1;
    vector<int> l(n,1),r(n,1);
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<a[i])
            l[i] = l[i-1]+1;
        ans = max(l[i],ans);
    }
    for(int i=n-2;i>=0;i--)
    {
        if(a[i+1]>a[i])
            r[i] = r[i+1]+1;
        ans = max(r[i],ans);
    }
    // for(int i=0;i<n;i++)
    //     cout<<l[i]<<" "<<r[i]<<"....";
    for(int i=1;i<n-1;i++)
    {
        if(a[i-1] < a[i+1])
        ans = max(l[i-1]+r[i+1],ans);
    }
    cout<<ans<<endl;
    return 0;
}