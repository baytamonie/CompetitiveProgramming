#include<iostream>


using namespace std; 

string s[3];
int f[26]={0};

int main(){

cin>>s[0]>>s[1]>>s[2];
for(int i =0;i<s[0].length();i++){

    f[int(s[0][i])-65]++;
}

for(int i =0;i<s[1].length();i++){

    f[int(s[1][i])-65]++;
}
for(int i =0;i<s[2].length();i++){

    f[int(s[2][i])-65]--;
}

for(int i=0;i<26;i++){
    if(f[i]==0)
        continue;
        else{
            cout<<"NO\n";
            return 0;
        }
}

cout<<"YES\n";

}