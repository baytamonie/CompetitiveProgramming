#include<iostream>
using namespace std;
int n,t,b[100000],l,r,s,mx;

int main(){

    cin>>n>>t;
    for(int i=0;i<n;i++)
        cin>>b[i];

    while(r<n){

        s+=b[r];
        
        while(s>t && l<=r){
            s-=b[l++];
        }
        mx=max(mx,r-l+1);
        r++;
    }

    cout<<mx;

}














//my first solution
// #include<iostream>

// using namespace std;

// int n,t;

// int b[100000];
// int ans;
// int m;
// int s;
// int j;

// int main(){

//     cin>>n>>t;

//     for(int i =0;i<n;i++){
//         cin>>b[i];
//     }
    
//     for(int i =0;i<n;i++){
        
//         s+=b[i];
//         m++;
//         while(s>t && j<n){
//             s-=b[j++];
//             m--;
//             }
//         ans=max(m,ans);

//     }
//     cout<<ans;

// }

