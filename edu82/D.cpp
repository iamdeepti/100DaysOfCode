#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define f first
#define s second
const int N = 1000005;
void update(vi &bit,int n,int index,int value)
{
    // cout<<"update"<<endl;
    for(;index<=n;index += index&(-index))
        bit[index] += value;
}
int query(vi &bit,int n,int index)
{
    // cout<<"query"<<endl;
    int ans = 0;
    for(;index>0;index -= index&(-index))
        ans += bit[index];
    return ans;
}
int findK(vi &bit,int n,int k)
{
    // cout<<"delete"<<endl;
    int l=1,r=n,ans=-1;
    while(l<=r)
    {
        // cout<<l<<":"<<r<<endl;
        int mid = l + (r-l)/2;
        int curr = query(bit,n,mid);
        if(k==curr && query(bit,n,mid-1)!=curr)
            return mid;
        else if(k>curr)
            l =mid+1;
        else{
            r = mid-1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int n,q;
    cin>>n>>q;
    // int *bit = new int[n+5];
    vi bit(n+1);
    int x;
    for(int i=1;i<=n;i++)
    {
        //cin>>x;
        scanf("%d",&x);
        update(bit,n,x,1);
    }
    for(int i=0;i<q;i++)
    {
        // cin>>x;
        scanf("%d",&x);
        if(x>0)
            update(bit,n,x,1);
        else
        {
            x *= -1;
            x = findK(bit,n,x);
            // cout<<x<<endl;
            update(bit,n,x,-1);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(query(bit,n,i)!=0)
        {
            printf("%d ",i);
            //delete[] bit;
            return 0;
        }
    }
    //if(i==0)
        //cout<<"0"<<endl;
        printf("0");
        //delete[] bit;
    return 0;
}