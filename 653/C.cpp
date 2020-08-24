#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char ch;
        int c=0;
        stack<char> st;
        while(n--)
        {
            cin>>ch;
            if(ch=='(')
            {
                st.push('(');
                c++;
            }
            else {
                if(!st.empty())
                {
                    st.pop();
                    c--;
                }
                
            }
        }
        cout<<abs(c)<<endl;
    }
}