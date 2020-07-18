#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp> 
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int headmax = 0, tailmax = 0, head = 0, tail = 0, headmaxtemp= 0, tailmaxtemp = 0;
    int i;
    int n;
    vector <string> toss;
    cin>>n;
    for(i=0;i<n;i++){
        string s;
        cin>>s;
        toss.push_back(s);
    }
        
    for(i=0;i<toss.size();i++) {
        if(!(toss[i].compare("Heads"))) {
            cout<<"Head: ";
            if(head)
                headmaxtemp++;
            else {
                if(tailmaxtemp > tailmax)
                    tailmax = tailmaxtemp;
                headmaxtemp = 1;
                head = 1;
                tail = 0;
                tailmaxtemp = 0;
            }
        } else {
            cout<<"Tail: ";
            if(tail)
                tailmaxtemp++;
            else {
                if(headmaxtemp>headmax)
                    headmax = headmaxtemp;
                tailmaxtemp = 1;
                tail = 1;
                head = 0;
                headmaxtemp = 0;
            }
        }
        
        // cout<<headmax<<" "<<tailmax<<endl;
        // cout<<headmaxtemp<<" "<<tailmaxtemp<<endl;
        // cout<<head<<" "<<tail<<endl<<endl;
    }
    
    if(head) { cout<<"het"<<endl;
            if(headmaxtemp > headmax)
                headmax = headmaxtemp; }
        else { cout<<tailmaxtemp<<" "<<tailmax<<endl;
            if(tailmaxtemp > tailmax)
                tailmax = tailmaxtemp; }
    cout<<headmax<<" "<<tailmax;
	return 0;
}
