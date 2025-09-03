#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,h;
    cin>>x>>h;
    if(x==4){
        cout<<h<<endl;
    }
    else{
        if (x>4){
            cout<<(24*(x - 4))+h<<endl;
        }
    }
} 
