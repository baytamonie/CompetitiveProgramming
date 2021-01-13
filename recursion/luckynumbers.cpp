#include<iostream>


using namespace std;

long long num,mn=1e12;
int c;


void rec(int c, long long a){

    if(a>1e11)
        return;

    if(c==0 && a >= num)
        mn=min(mn,a);
    rec(c+1,a*10+4);
    rec(c-1,a*10+7);

}


int main(){

    cin>>num;
    rec(0,0);
    cout<<mn;
    

}