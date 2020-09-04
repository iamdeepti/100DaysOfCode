#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
int n;
int f(int a,int x)
{
    return pow(x,n)-a;
}
int nthroot(int x,int n)
{
    
}
int main()
{
     cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());

    return 0;
}
