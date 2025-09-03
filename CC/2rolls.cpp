#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    
        int x,y;
        cin>>x>>y;
        int req=50-x;
        int min=2*y;
        int max=2*(y+5);
        if(req>=min && req<=max){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}