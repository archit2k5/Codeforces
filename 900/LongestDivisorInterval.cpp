#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        int longest_interval=0;
        for(int i=1; i<50; i++){
            if(n%i!=0){
                break;
            }
            else{
                longest_interval++;
            }
        }
        cout<<longest_interval<<endl;
    }
    return 0;
}