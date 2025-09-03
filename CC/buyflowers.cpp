#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=INT_MAX;
        for(int i=0;i<=n/2;i++){
            for(int j=0;j<=n/3;j++){
                if(2*i+3*j==n)
                ans=min(ans,4*i+5*j);
            }
        }
        cout<<ans<<endl;
    }
}