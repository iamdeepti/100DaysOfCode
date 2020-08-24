/* 
CONCEPT USED - 2 POINTERS
MAIN PROBLEM WAS DIVIDED INTO TWO INDEPENDENT PROBLEMS
*/
#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define mp make_pair
const int N = 2*(1e5)+1;
int main()
{
    int n,x;
    cin>>n;
    int m[N] = {0};
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m[x]++;
    }
    int cnt=0,i=1;
    while(i<N)
    {
        if(m[i])
        {
            i += 3;
            cnt++;
        }
        else
        {
            i++;
        }
    }
    cout<<cnt<<" ";
    vector<pair<int,int>> v;
    for(int i=1;i<N;i++)
    {
        if(m[i])
        v.push_back(mp(i,m[i]));
    }
    n=v.size();
    
    
    int left=0,right=-1;
    i=0;
    int ans=0;
    while(i<n)
    {
        {
            left=max(v[i].f-1,right+1);
            //right += 2;
        }
        
        if(v[i].s==1)
        {
            right = min(left,v[i].f+1);
        }
        else if(v[i].s==2)
        {
            right = min(left+1,v[i].f+1);
        }
        else{
            right = min(left+2,v[i].f+1);
        }
        ans += (right -left+1);
        i++;
    }
    cout<<ans<<endl;
    return 0;
}