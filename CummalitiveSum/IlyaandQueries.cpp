#include<iostream>

using namespace std;
string s;
int c;
int n,m;
int l,r;
int main(){

    cin>>s;
    cin>>m;
    for(int i=0;i<m;i++){

        cin>>l>>r; 
        c=0;
        for(int j=l ;j <r-1;j++){

            if (s[j]==s[j+1])
                c++;
            
        }
        cout<<c<<"\n";

    }

}