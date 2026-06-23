#include<iostream>

using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        
        int op=0;
        bool flag=true;

        if(b<=d){
            op+= d-b;
            a+=op;
        }else{
            flag=false;
        }

        if(c<=a){
            op+=a-c;
        }else{
            flag=false;
        }

        if(flag){
            cout<<op<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;

}