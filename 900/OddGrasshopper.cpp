#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x0, n;
        cin>>x0>>n;

        bool isEven=(x0%2==0);

        long long result=n%4;
        if(result==0){
            cout<<x0<<endl;
        }
        else if(result==1){
            result=isEven ? x0-n : x0+n;
            cout<<result<<endl;
        }
        else if(result==2){
            result=isEven ? x0+1 : x0-1;
            cout<<result<<endl;
        }
        else{
            result=isEven ? x0+n+1 : x0-1-n;
            cout<<result<<endl;
        }
    }

    return 0;
}