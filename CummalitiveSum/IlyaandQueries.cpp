#include<iostream>
using namespace std;

string s;
int c;
int m;
int l,r;
int cs[100000]={0};
int j=1;
int main(){

    cin>>s>>m;
    for(int i =0;i<s.length()-1;i++){
        if(s[i]==s[i+1])
            cs[j]=cs[j-1]+1;
        else 
            cs[j]=cs[j-1];
        j++;
    }

    for(int i =0;i<m;i++){
        cin>>l>>r;
        cout<<cs[r-1]-cs[l-1]<<"\n";
    }

    
}