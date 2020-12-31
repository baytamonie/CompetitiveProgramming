#include<iostream>

using namespace std;
int n;
int arr[100000];
int sum=0;
int cs=0;
int ans=0;
int main(){
    
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i =0;i<n;i++){
        if(i==n-1)
             break;
        cs+=arr[i];
        if(sum-cs == cs)
            ans++;
    }
    cout<<ans;

// }
// #include <iostream>
// using namespace std;
// int n,ans,cum[100010],a[100010];
 
// int main(){
//    cin>>n;
//  for(int i=1;i<=n;i++){
//         cin>>a[i];
//     cum[i]=cum[i-1]+a[i];
//    }
//  for(int i=1;i<n;i++){
//        if(cum[i]==cum[n]-cum[i])
//        ans++;
//    }
 
//    cout<<ans<<endl;
 
//     return 0;
// }