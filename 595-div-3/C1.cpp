#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
vi memo;
bool predict(int n)
{
    int ans=0;
    int k=0;
    bool flag = false;
    //vi res;
    while(n)
    {
        int q = n/3;
        int rem = n%3;
        if(rem==2)
            return false;
        n = q;
    }
    
    return true;;
}
int main()
{
    int q;
    cin>>q;
    for(int i=1;i<=20000;i++)
    {
        if(predict(i))
            memo.push_back(i);
    }
    while(q--)
    {
        int n;
        cin>>n;
        for(auto x:memo)
        {
            if(x>=n)
            {
                cout<<x<<endl;
                break;
            }
        }
    }
    return 0;
}