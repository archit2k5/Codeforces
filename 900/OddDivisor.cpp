#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        bool flag=false;
        while(n>1){
            if(n%2==1){
                flag=true;
                break;
            }
            else{
                n>>=1;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}