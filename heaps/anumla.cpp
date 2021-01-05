#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
ifstream fin ("output.txt");
void solve()
{
    int n; fin>>n;
    int k = (1<<n);
    multiset<int> sumSet;
    for(int i=0;i<k ;i++)
    {
        int x; fin>>x;
        sumSet.insert(x);
    }
    vector<int> values(n),subSets;
    subSets.push_back(0);
    sumSet.erase(sumSet.begin());
    // values[0]=*sumSet.begin();
    // subSets.push_back(values[0]);
    // sumSet.erase(sumSet.begin());
    int i=0;
    while(i<n)
    {
        int sz = subSets.size();
        for(int j=0;j<sz;j++)
        {
            
            auto it = sumSet.find(subSets[j]+values[i-1]);
            if(it != sumSet.end())  sumSet.erase(it);
            
            subSets.push_back(subSets[j]+values[i-1]);
            // cout<<subSets[j]<<" ";
        }
        // for(auto x: subSets)    cout<<x<<" ";
        // cout<<endl;
        values[i] = *sumSet.begin();
        // for(int j=0;j<=i;j++)   cout<<values[j]<<" ";
        // cout<<endl;
        
        i++;
    }
    for(auto x: values) cout<<x<<" ";
    cout<<endl;
}

int32_t main()
{
    int t;	fin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}