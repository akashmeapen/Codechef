#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int best=0;
	    int n,x;
	    cin>>n>>x;
	    for(int i=0;i<n;i++){
            int s,r;
	        cin>>s>>r;
            if(s<=x){
	        best=max(best,r);
	    }
	    }
	    cout<<best<<endl;
	}

}
