#include<iostream>
#include<stack>

using namespace std; 

stack<char> st,st2;
string s;


int main(){

    cin>>s;

    for(int i =0 ;i< s.length() ;i++){
        if(!st.empty() && st.top()==s[i])
            st.pop();
        else 
            st.push(s[i]);
    }

    for(int i = 0 ; st.size();i++){
        st2.push(st.top());
        st.pop();
    }
    for(int i = 0 ; st2.size();i++){
        cout<<st2.top();
        st2.pop();
    }
    cout<<"\n";
}