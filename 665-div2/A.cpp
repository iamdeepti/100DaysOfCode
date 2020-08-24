#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<int>
int solve()
{
    int n,k;
    cin>>n>>k;
    if(k==n)
        return 0;
    if(k==0 && n==1)
        return 1;
    if(k>n)
        return k-n;
    if(abs(n-k)&1)
        return 1;
    else
        return 0;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
