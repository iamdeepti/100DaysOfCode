/* Concept involved --> connected components */
#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vb vector<bool>
void dfs(int i,vi &a, vb &vis, vi & s,vi &belongs,int k)
{
    if(vis[i])
        return;
    belongs[i]=k;
    vis[i]=true;
    s.push_back(i);
    dfs(a[i],a,vis,s,belongs,k);
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vi a(n+1);
        for(int i=0;i<n;i++)
            cin>>a[i+1];
        vb vis(n+1,false);
        vector<vi> comp;
        vi belongs(n+1);
        int k=0;
        for(int i=1;i<=n;i++)
        {

            if(!vis[i])
            {   
                vi s;
                 dfs(i,a,vis,s,belongs,(int)comp.size());
                 //comp.insert(s);
                //  for(auto x: s)
                //  {
                //      cout<<x<<" ";
                //  }
                //  cout<<comp.size()<<endl;
                 comp.push_back(s);
                // k++;
            }

        }
        
        for(int i=1;i<=n;i++)
        {
            // cout<<belongs[i]<<":";
            cout<<comp[belongs[i]].size()<<" ";
        }
        cout<<endl;
    }
}