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
int bits(int n)
{
    int count=0;
    while(n)
    {
        n = n>>1;
        count++;
    }
    return count;
}
void solve()
{
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n-1;i++)
    {
        a[i]=9;
    }
    int temp = n;
    for(int i=n-1;i>=0&&temp>0;i--)
    {
        // if(bits(a[i])>temp)
        // {
        //     int mask = 
        // }
        if(temp<=0)
            break;
        if(temp>3)
        {
            a[i] = 8;
            temp = temp-4;
        }
        else 
        {
            a[i] = 8;
            temp = temp-3;
        }
        // else if(temp==2)
        // {
        //     a[i] = 4;
        //     temp = temp-2;
        // }
        // else if(temp==1)
        // {
        //     a[i]=2;
        //     temp = temp-1;
        // }
    }
    for(auto x:a)
        cout<<x;
    cout<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
