#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,k;
 cin>>n>>k;
 vector<int> a(n);
 int ans =0;
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
     
 }
 int i;
 for(i=0;i<n;i++)
 {
     if(a[i]<=k)
        ans++;
    else
     break;
 }
 for(int j=n-1;j>i;j--)
 {
     if(a[j]<=k)
        ans++;
    else
     break;
 }
 cout<<ans<<endl;
 return 0;
}