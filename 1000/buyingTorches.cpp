#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x, y, k;
        cin>>x>>y>>k;

        long long op=0;
        long long sticks_required = k*y+ k-1;

        op+=(sticks_required+x-2)/(x-1);

        op+=k;

        cout<<op<<endl;

    }
    return 0;
}