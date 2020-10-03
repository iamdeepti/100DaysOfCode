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
    int n,k,i=0;
    cin>>n>>k;
    string str; cin>>str;
    multiset<int> st;
    int maxm = 0;
    while(i<n)
    {
        int j = i;
        while(j<n && str[i]==str[j])    j++;
        st.insert(j-i);
        maxm = max(j-i,maxm);
        i = j+1;
    }
    if(maxm==1)
    {
        cout<<1<<endl;
        return;
    }
    
    while(k-- & *st.rbegin()>2)
    {
        int p = *st.rbegin();
        st.erase(--st.end());
        st.insert((p-1)/2);
        st.insert((p-1)/2);
        st.insert(1);
    }
    if(*st.rbegin()==1)
    {
        cout<<1<<endl;
        return;
    }
     if(*st.rbegin()==2)
    {

    }
    cout<<*st.rbegin()<<endl;
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
