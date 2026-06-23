#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n,k;
        cin>>n>>k;

        bool flag=false;

        if(n>=2 && n%2==0){
            flag=true;
        }
        else if(n>=k && k%2==1){
            flag=true;
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}