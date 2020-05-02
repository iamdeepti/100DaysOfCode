#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[11];
    while(t--)
    {
        int n;
        cin>>n;
        memset(a,0,sizeof(a));
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a[x]++;
        }
        int left=0,right=-1,i=0,minans=INT_MAX,maxans=0;
        while(i<11)
        {
            int cnt = 0;
            left = max(right+1,i);
            right = left;
            // if(a[left])
            //     right = left+2;
            while(i<11 && i<=right)
            {
                
                if(a[i])
                {    right = i+2;
                    cnt++;
                    
                }
                i++;
            }
            if(cnt)
                minans = min(cnt,minans);
            maxans = max(cnt,maxans);
            //cout<<left<<" "<<right<<endl;
        }
        
        cout<<minans<<" "<<maxans<<endl;
    }
    return 0;
}