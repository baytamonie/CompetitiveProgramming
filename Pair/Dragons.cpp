#include<iostream>
#include<algorithm>
using namespace std;

int s , n ;
pair <int,int> x[1000];

int main(){

cin >> s >> n ;
for(int i =0;i<n;i++)
    cin>>x[i].first>>x[i].second;
sort(x,x+n);
for(int i=0;i<n;i++){
    if(s<=x[i].first)
    {
        cout<<"NO\n";
        return 0;
    }
    s+=x[i].second;
}
cout<<"YES\n";
return 0;
}