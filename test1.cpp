/* CONCEPT USED - MULTIPOINT BFS
ALSO UNORDERED_SETS TAKES LINEAR TIME FOR SEARCING IN WORST CASE SO USING SETS
IS THE BEST OPTION MOST OF THE TIME
QUESTION LINK - https://codeforces.com/contest/1283/problem/D
*/

#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define f first
#define s second
typedef long long ll;
int main()
{
    int n,m,x;
    cin>>n>>m;
    //vector<int> a(n);
    queue<pair<ll,ll>> q;
    set<ll> used;
    vector<ll> res;
    for(int i=0;i<n;i++)
    {    //cin>>a[i];
        cin>>x;
        q.push(mp(x,x));
        used.insert(x);
    }
    ll dist=0;
    while(!q.empty())
    {
        ll v = q.front().f;
        ll p = q.front().s;
        q.pop();
        if(res.size()==m)
            break;
        if(used.count(v+1)==0)
        {
            q.push(mp(v+1,p));
            res.push_back(v+1);
            dist += abs((v+1)-p);
            used.insert(v+1);
        }
        if(res.size()==m)
            break;
        if(used.count(v-1)==0)
        {
            q.push(mp(v-1,p));
            res.push_back(v-1);
            dist += abs((v-1)-p);
            used.insert(v-1);
        }
        if(res.size()==m)
            break;
    }
    cout<<dist<<endl;
    for(int i=0;i<m;i++)
        cout<<res[i]<<" ";
    return 0;
 }
