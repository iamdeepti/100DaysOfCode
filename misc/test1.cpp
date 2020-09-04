#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>

int main()
{
    string str;
    cin>>str;
    int n = str.length();
    string temp = str;
    sort(temp.begin(),temp.end());
    stack<char> st;
    int j=0;
    int cnt[26]={0};
    for(auto ch:str) cnt[ch-'a']++;
    cout<<temp<<endl;
    for(int i=0;i<n;i++)
    {
        if(str[i]==temp[j])
        {
            cout<<str[i];
            j++;
            continue;
        }
        while(!st.empty() && st.top()==temp[j])
        {
            cout<<st.top();
            st.pop();
            j++;
        }
        st.push(str[i]);
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
    return 0;
}
