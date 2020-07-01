#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        vector<long long int> a(n),b(n);
        for(long long int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        long long int c =0,r =0;
        for(long long int i=0;i<n;i++){
           long long int i2 = lower_bound(b.begin(),b.end(),a[i])-b.begin();
           std::vector <long long int>::const_iterator it = upper_bound(b.begin(), b.end(), a[i]);
           long long int i3 = it-b.begin()-1;
           if(i3 == i2) {
               if(abs(i2-i)%k == 0){
                c++;
            }
            else{
                r=1;
                break;
            }
           }
           else {
                if((abs(i2-i)%k ==0) or (abs(i3-i)%k==0)) 
                    c++;
                else {
                    r = 1;
                    break;
                }
           }
            
        }
        if(r==0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        
    }
}
