#include<iostream>


using namespace std;

int n;
string s="";
int cl,cr;
void rec(int cl,int cr,string ans,int cp){

    if(cp==2*n){
        cout<<ans<<"\n";
        return;
        }
    if(cl!=n)
        rec(cl+1,cr,ans+'(',cp+1);
    if(cr!=n && cr<cl)
        rec(cl,cr+1,ans+')',cp+1);


}

int main(){

  cin>>n;
  rec(0,0,s,0);

}