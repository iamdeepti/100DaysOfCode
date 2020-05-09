#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int x=-1,y=0;
        // while(y<=b)
        // {
        //     if((s-y )% n == 0 && (s-y)/n <= a)
        //         break;
        //     y++;
        // }
        // if(y>b)
        //     cout<<"NO"<<endl;
        // else
        // {
        //     cout<<"YES"<<endl;
        // }
        // if( (s-b+n-1)/n <= a)
        // {
        //     x = (s-b+n-1)/n ; 
        //     while(x<=a)
        //     {
        //         if(s - n*x <= b && s-n*x >=0)
        //             break;
        //         x++;
        //     }
        //     if(x>a)
        //         cout<<"NO"<<endl;
        //     else
        //     {
        //         // cout<<x<<" ";
        //         cout<<"YES"<<endl;
        //     }
            
        // }
        // else
        // {
        //     cout<<"NO"<<endl;
        // }
         x = min(s/n,a);
        y = s - x*n;
        if(y>=0 && y<=b)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}