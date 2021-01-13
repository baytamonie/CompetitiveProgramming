    #include<iostream>
    #include<algorithm>
    using namespace std;

    int n,d;
    pair <int,int> p[100000];
    int l,r;
    long long s,mx;
    int main(){
        cin>>n>>d;
        for(int i =0;i<n;i++)
            cin>>p[i].first>>p[i].second;
        sort(p,p+n);

        while(r<n){

            s+=p[r].second;
            
            while(p[r].first-p[l].first>=d)   
            {
                s-=p[l].second;
                l++;
            }
            mx=max(mx,s);
            r++;
        }
       cout<<mx;
    }