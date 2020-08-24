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
void solve()
{
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans=0,p=0;
    int i=0,j=n-1;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            s.insert(a[i]+a[j]);
        }
    }
    // while(i<j)
    // {
    //     int curr = *s.begin();
    //     s.erase(curr);
    //     i++;j--;
    //     if(w[i]+w[j]>curr)
    //     {
    //         j++;
    //         p=0;
            
    //     }
    //     else if(w[i]+w[j]<curr)
    //     {
    //         i--;
    //         p=0;
    //         continue;
    //     }
    //     p++;
    //     ans = max(ans,p);
    // }
    for( auto x:s)
    {
      int i=0,j=n-1;
      int k=0;
      while(i<j)
      {
          if(a[i]+a[j]==x)
          {
              k++;
              i++;
              j--;
          }
          else if(a[i]+a[j]>x)
          {
              j--;
          }
          else{
              i++;
          }
          
      }  
      ans = max(ans,k);
    }
    cout<<ans<<endl;
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
