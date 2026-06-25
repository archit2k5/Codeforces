#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int count3=0;
        int count2=0;
        while(n%3==0 && n>1){
            count3++;
            n/=3;
        }
        while(n%2==0 && n>1){
            count2++;
            n/=2;
        }
        
        if(count3<count2 || n>1){
            cout<<-1<<endl;
        }
        else{
            cout<<count3+(count3-count2)<<endl;
        }
    }
}