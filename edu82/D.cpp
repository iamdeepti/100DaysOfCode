#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define f first
#define s second
void update(int * bit,int n,int index,int value)
{
    for(;index<=n;index += index&(-index))
        bit[index] += value;
}
int query(int * bit,int n,int index)
{
    int ans = 0;
    for(;index>0;index -= index&(-index))
        ans += bit[index];
    return ans;
}
int main()
{
    int n,q;
    cin>>n>>q;
    int *bit = new int[n+1];
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        update(bit,n,x,1);
    }
    for(int i=0;i<q;i++)
    {
        cin>>x;
        if(x>0)
            update(bit,n,x,1);
        else
            update(bit,n,x,-1);
    }
    int i;
    for( i=n+1;i>0;i--)
    {
        if(query(bit,n,i)-query(bit,n,i-1) !=0)
        {
            cout<<i<<endl;
            break;
        }
    }
    if(i==0)
        cout<<0<<endl;
    return 0;
}