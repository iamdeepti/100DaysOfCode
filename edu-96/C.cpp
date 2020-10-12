#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
bool parity(int x,int y)
{
    if(x&1 && y&1)
        return true;
    if(x&1)
        return false;
    if(y&1)
        return false;
    return true;
}
void solve()
{
    // set<int> even,odd;
    int n; cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     if(i&1) odd.insert(i);
    //     else even.insert(i);
    // }
    // while(odd.size()>1 && even.size()>1)
    // {
    //     int k1 = *odd.rbegin(), k2 = *even.rbegin();
    //     if(k1>k2)
    //     {
    //         odd.erase(k1);
    //         int k3 = *odd.rbegin();
    //         cout<<k3<<" "<<k1<<endl;
    //          odd.erase(k3);   
    //         int k4 = (k1+k3)/2;
    //         if(k4&1)
    //             odd.insert(k4);
    //         else
    //         {
    //             even.insert(k4);
    //         }
    //     }
    //     else
    //     {
    //         even.erase(k2);
    //         int k3 = *even.begin();
    //         cout<<k3<<" "<<k2<<endl;
    //          even.erase(k3);   
    //         int k4 = (k2+k3)/2;
    //         if(k4&1)
    //             odd.insert(k4);
    //         else
    //         {
    //             even.insert(k4);
    //         }
    //     }
        
    // }
    // while(odd.size()>1)
    // {
    //     int k1 = *odd.rbegin();
    //     odd.erase(k1);
    //     int k3 = *odd.rbegin();
    //         cout<<k3<<" "<<k1<<endl;
    //          odd.erase(k3);   
    //     int k4 = (k1+k3)/2;
    //     if(k4&1)
    //         odd.insert(k4);
    //     else
    //     {
    //         even.insert(k4);
    //     }
        
    // }
    // while(even.size()>1)
    // {
    //     int k1 = *even.rbegin();
    //     even.erase(k1);
    //     int k3 = *even.rbegin();
    //         cout<<k3<<" "<<k1<<endl;
    //          even.erase(k3);
    //     int k4 = (k1+k3)/2;
    //     if(k4&1)
    //         odd.insert(k4);
    //     else
    //     {
    //         even.insert(k4);
    //     }
    // }
    // if(odd.size()==1 && even.size()==1)
    // {
    //     int k1 = *odd.begin(), k2 = *even.begin();
    //     if(k1>k2)
    //         cout<<k2<<" "<<k1<<endl;
    //     else
    //     {
    //         cout<<k1<<" "<<k2<<endl;
    //     }
        
    // }
    vector<int> a;
    for(int i=1;i<=n;i++)   a.pb(i);
    cout<<2<<endl;
    while(n>1){
        if(n<3 || parity(a[n-1],a[n-2]))
        {
            cout<<a[n-2]<<" "<<a[n-1]<<endl;
            a[n-2] = (a[n-1]+a[n-2])/2;
            n = n-1;
            
        }
        else
        {
            // cout<<a[n-2]<<" "<<a[n-1]<<endl;
            // a[n-2] = (a[n-1]+a[n-2])/2;
            // n = n-2;
            cout<<a[n-3]<<" "<<a[n-1]<<endl;
            a[n-3] = (a[n-1]+a[n-3])/2;
            n = n-1;
        }
        
    }
}

int32_t main()
{
    int t;	cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
