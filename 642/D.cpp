#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define l first
#define r second
#define mp make_pair
bool comp(pii a, pii b)
{
    if((a.r-a.l) == (b.r-b.l))
        return a.l < b.l;
    return (((a.r-a.l) > (b.r-b.l)));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int> a(n);
        queue<pii> q;
        q.push(mp(0,n-1));
        int i=1;
        vector<pii> p;
        while(!q.empty())
        {
            int left = q.front().l, right = q.front().r;
            //cout<<left<<" "<<right<<endl;
            int index = left + (right-left)/2;
            q.pop();
            p.push_back(mp(left,right));
            if(index-1>=left && index>=1)
                q.push(mp(left,index-1));
            if(index+1<=right && right<n)
                q.push(mp(index+1,right));
        }
        sort(p.begin(),p.end(),comp);
        int k = 1;
        // for(auto x:p)
        //     cout<<x.l<<" "<<x.r<<endl;
        for(int i=0;i<n;i++)
        {    a[(p[i].l + (p[i].r-p[i].l)/2)] = k;
             k++;
        }
        for(auto x: a)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}