#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        int sume=0,sumo=0;
        cin>>x>>y;
        for(int i=x;i<=y;i+=x){
            if(i%2==0){
                sume=sume+i;
            }
            else{
                sumo=sumo+i;
            }
        }
        if(sume>=sumo){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}
