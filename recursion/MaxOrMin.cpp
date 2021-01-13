#include<iostream>
#include<vector>

using namespace std;

// int n;
// int arr[20];
// int mx=0;

// void rec(){

            

// }


int main(){

    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    //     mx= mx | arr[i];
    // }

    vector <int> a,b;

    a.push_back(10);
    b.push_back(30);
    a.push_back(20);
    b.push_back(40);
    a.push_back(50);
    b=a;
    cout<<b[0]<<b[1]<<b[2];

}