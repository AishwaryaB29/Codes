#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    int i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    
    
    int c = 0;
    vector< pair <int,int> > depth,maxSeq;
    int c2 = 0,flag = 0,ind = 0;
    for(i=0;i<n;i++) {
        if(a[i] == 1) {
            if(c == c2){
                c2++;
                ind = i;
            }
            c++;
            flag++;
        }
        else {
            if(c-1 == 0) {
                depth.push_back(make_pair(c2,ind+1));
                c2 = 0;
                c = 0;
                maxSeq.push_back(make_pair(flag+1,i+1));
                flag = 0;
            }
            else {
                c--;
                flag++;
            }
        }
        
    }
    int depsize = depth.size(),maxdep = depth[0].first,maxdepind = depth[0].second;
    int maxsize = maxSeq.size(),maxseqq = maxSeq[0].first,maxseqqind = 1;;
    for(i=0;i<depsize;i++){
        if(depth[i].first > maxdep) {
            maxdep = depth[i].first;
            maxdepind = depth[i].second;
        }
        //cout<<depth[i].first<<" "<<depth[i].second<<endl;
    }
        
    for(i=0;i<maxsize;i++){
        if(maxSeq[i].first > maxseqq) {
            maxseqq = maxSeq[i].first;
            maxseqqind = maxSeq[i].second - maxseqq + 1;
        }
        //cout<<maxSeq[i].first<<" "<<maxSeq[i].second<<endl;   
    }
    
    cout<<maxdep<<" "<<maxdepind<<" "<<maxseqq<<" "<<maxseqqind<<endl;
    
	return 0;
}
