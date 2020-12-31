#include<iostream>
using namespace std;

int freq[26]={0};
int n;
char c[100000];


int main(){

cin>>n;

if(n==1){
    cout<<"Yes";
    return 0;}
for(int i=0;i<n;i++){
    cin>>c[i];
    freq[(int(c[i]))-97]++;
    if( freq[(int(c[i]))-97] >= 2 )
        {
            cout<<"Yes\n";
            return 0;

        }

}
cout<<"No\n";
}