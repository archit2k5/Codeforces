#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        long long extra=n%6;

        if(n%2==1 || n<4){
            cout<<-1<<endl;
        }
        else{
            if(extra==2 || extra==4){
                cout<<n/6+1<<" ";
            }
            else{
                cout<<n/6<<" ";
            }
            cout<<n/4<<endl;
        }
    }
    return 0;
}