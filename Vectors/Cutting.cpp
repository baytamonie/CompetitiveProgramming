#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,b,c=0;
int arr[100];
int s = 0;
vector<int> v; 


int main(){
cin >> n >> b;

if(n==2){
    cout<<0;
    return 0;
}

for(int i =0;i<n;i++)
    cin>>arr[i];


int odd=0,even=0;


for(int i =0;i<n;i++){
    if(arr[i]%2==0)
        even++;
    else odd++;

    if(odd==even && i!= n-1)
        v.push_back(abs(arr[i]-arr[i+1]));
}
sort(v.begin(),v.end());
for(int i =0;i<v.size();i++){
    s+=v[i];
    if(s>b)
        break;
    c++;
}
cout<<c<<endl;
}