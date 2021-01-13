    #include<iostream>
    
    using namespace std;

    int l,r;
    int n,k;
    string s;
    int mx;
    int j;
    int main(){

        cin>>n>>k>>s;

        while(r<n){
            if(s[r]=='b')
                j++;
            if(j<=k)
                mx=max(mx,r-l+1);
            while(j>k)
            {
                if(s[l]=='b')
                    j--;

                l++;
            }

            r++;
        }
    l=0; r=0; j=0;
      while(r<n){
            if(s[r]=='a')
                j++;
            if(j<=k)
                mx=max(mx,r-l+1);
            while(j>k)
            {
                if(s[l]=='a')
                    j--;

                l++;
            }

            r++;
        }
        cout<<mx<<"\n";
    }