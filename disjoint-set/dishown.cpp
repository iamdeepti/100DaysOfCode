#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
const int N = 1e5+5;
int scores[N];
int p[N];
int n;
int getParent(int x)
{
    if(p[x]!=x)
        p[x] = getParent(p[x]);
    return p[x];
}
void merge(int x, int y)
{
    int px = getParent(x), py = getParent(y);
    if(px==py)
    {
        cout<<"Invalid query!"<<"\n";
        return ;
    }

    if(scores[px]>scores[py])
        p[py] = px;
    else if(scores[px]<scores[py])
        p[px] = py;
}
void solve()
{
    cin>>n;
    memset(scores,0,sizeof(scores));
    for(int i=0;i<n;i++)
        cin>>scores[i];
    
    //INTIALISATION
    for(int i=0;i<n;i++)
    {
        p[i] = i;   
    }

    int q; cin>>q;
    while(q--)
    {
        char ch;
        int x=0,y=0;
        cin>>ch;
        if(ch=='1')
        {
            cin>>x;
            //find chef
            x--;
            cout<<getParent(x)+1<<"\n";
        }
        else
        {
            cin>>x>>y;
            x--; y--;
            // do union
            merge(x,y); 
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
