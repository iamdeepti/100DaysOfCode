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
struct comp{
bool operator() (pii a,pii b) const
{
    if(a.s==b.s)
        return a.f<b.f;
    return a.s>b.s;
}
};
vi a(100001);
void solve()
{
    int n,x;
    cin>>n;
    set<pii,comp> st;
    map<int,int> mp;
    for(int i=0;i<100001;i++)
        a[i]=0;
    for(int i=0;i<n;i++)
    {    
        //  cin>>a[i];
        cin>>x;
        // cout<<x<<endl;
        if(st.find({x,a[x]})!=st.end())
        {
            st.erase({x,a[x]});
            st.insert({x,a[x]+1});
        }
        else{
            st.insert({x,1});
        }
        a[x]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int k;
        char ch;
        cin>>ch>>k;
        // cout<<ch<<endl;
        
        // cout<<k<<"kk"<<endl;
        if(ch=='+')
        {
            st.erase({k,a[k]});
            a[k]++;
            st.insert({k,a[k]});
        }
        else{
            st.erase({k,a[k]});
            a[k]--;
            st.insert({k,a[k]});
        }
        auto i = *st.begin();
        if(i.s<4)
        {
            cout<<"NO"<<endl;
            
        }
        else{
            st.erase({i.f,i.s});
            pii temp = mk(i.f,i.s-4);
            st.insert(temp);
            auto j = *st.begin();
            if(j.s>=2)
            {
                st.erase({j.f,j.s});
                pii temp2 = {j.f,j.s-2};
                st.insert(temp2);
                if(st.begin()->second >=2)
                {
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
                st.erase(temp2);
                st.insert({j.f,j.s});
            }
            else{
                cout<<"NO"<<endl;
            }
            st.erase(temp);
            st.insert({i.f,i.s});
        }
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}
