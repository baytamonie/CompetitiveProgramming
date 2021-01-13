#include<iostream>
using namespace std;

int n; int x[21];

char c;

int mn=23;

void rec(int sum,int index,int ans){

    if(index == n ){

        if(sum==0)
            mn=min(mn,ans);

        return;
    }

    rec(sum+x[index],index+1,ans);
    if(index!=0)
        rec(sum-x[index],index+1,ans+1);



}

int main(){

    cin>>n;
    cin>>x[0];
    for(int i = 1;i<n;i++){
            cin>>c>>x[i];
            if(c=='-')
                x[i]=-1*x[i];
        }
    rec(0,0,0);

    if(mn==23)
        cout<<-1;
    else 
        cout<<mn;
    cout<<"\n";

}





































// #include<iostream>


// using namespace std;

// int n;
// char c[41];
// int mn=23;

// void rec(int sum,int k,int m){
    
//     if(k>=((2*n)-1)){
       
//         if(sum+c[0]==0)
//             mn=min(mn,m);

//         return;
//     }

//     if(c[k+1]=='+'){
//         cout<<"AA";
//         rec((sum+c[k+2]),(k+2),m);
//         rec((sum-c[k+2]),(k+2),(m+1));
//     }
//     if(c[k+1]=='-'){

//         rec((sum-c[k+2]),(k+2),m);
//         rec((sum+c[k+2]),(k+2),(m+1));
//     }

// }

// int main(){

//     cin>>n;
//     for(int i =0;i<(2*n-1);i++)
//         cin>>c[i];   

   
//     rec(0,0,0);


//     if(mn==23)
//         cout<<-1<<"\n";
//     else 
//         cout<<mn<<"\n";
// }