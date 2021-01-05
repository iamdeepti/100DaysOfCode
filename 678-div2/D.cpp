#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    int arr[] = {5,3,1,9,14};
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<5;i++)
    {
        pq.push(arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
}

int32_t main()
{
    // int t;	cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
