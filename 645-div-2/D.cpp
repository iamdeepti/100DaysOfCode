#include<bits/stdc++.h>
using namespace std;
#define vector<int> vi;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vi a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        vi c(n),d(n);
        c[0] = a[0];
        for(int i=1;i<n;i++)
        {
            c[i] = c[i-1]+a[i];
        }
    }
    return 0;
}