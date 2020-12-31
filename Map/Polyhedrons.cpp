#include<iostream>
#include<map>

using namespace std;

int n,sum =0;
string s[200000];
map<char,int> mp;

int main(){


mp['T']=4;
mp['C']=6;
mp['O']=8;
mp['D']=12;
mp['I']=20;


cin >>n;


for(int i=0;i<n;i++){
    cin>>s[i];
    sum+=mp[s[i][0]];   
}

cout<<sum<<"\n";
}