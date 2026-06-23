#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum1=a+c, sum2= b+c;
        if(sum1>sum2){
            cout<<"First"<<endl;
        }
        else if(sum2>sum1){
            cout<<"Second"<<endl;
        }
        else{
            if((c&1)==0){
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }
    }

    return 0;
}