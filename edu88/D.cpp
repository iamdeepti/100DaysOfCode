#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n),suff(n),pref(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    suff[n-1]=0;
    pref[0]=0;
    for(int i=n-2;i>=0;i--)
    {
        pref[i] = max(a[i+1],a[i+1]+pref[i+1]);
    }
    for(int i=1;i<n;i++)
    {
        suff[i] = max(a[i-1],a[i-1]+suff[i-1]);
    }
    
}