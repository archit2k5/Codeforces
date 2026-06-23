#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x, y;
        cin>>x>>y;

        if(x==y){
            cout<<0<<" ";
            cout<<0<<endl;
        }
        else{
            cout<<abs(x-y)<<" ";
            long long steps=x%abs(x-y);
            long long ans=min(abs(x-y)-steps, steps);
            cout<<ans<<endl;
        }
    }
    return 0;
}