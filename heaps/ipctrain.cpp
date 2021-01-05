#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
struct trainer{
    int day, teach, sadness, index;
};
vector<trainer> trainers;
struct comp{
    bool operator () (int a, int b)
    {
        if(a == b)  return false;
        if(trainers[a].sadness == trainers[b].sadness)  
        {
            if(trainers[a].teach == trainers[b].teach)
                return a<b;
            return trainers[a].teach < trainers[b].teach;
        }
        return trainers[a].sadness > trainers[b].sadness;
    }
};
bool compare (trainer a, trainer b) {
    return a.day < b.day;
} 

void solve()
{
    int n, d;   cin>>n>>d;
    trainers.clear();    trainers.resize(n);
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        cin>> trainers[i].day >> trainers[i].teach >> trainers[i].sadness;
        trainers[i].index = i;
        ans += (trainers[i].teach * trainers[i].sadness);
    }
    sort(trainers.begin(), trainers.end(),compare);
    int day = 1, rem=d;
    int j = 0;
    set<int, comp> st;
    while(day<=d)
    {
        while(trainers[j].day == day){
            st.insert(j);
            j++; 
        }
        if(!st.empty()){
            
            int i = *st.begin();
            // cout<<day <<" "<<i<<endl;
            ans -= trainers[i].sadness;
            st.erase(i);
            trainers[i].teach--;
            
            if(trainers[i].teach>0)   st.insert(i);
        }
        day++;
    }
    cout<<ans<<endl;
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
