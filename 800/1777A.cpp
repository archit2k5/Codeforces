#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int op=0;
        for(int i=0; i<n-1; i++){
            int parityF=arr[i]%2;
            int parityS=arr[i+1]%2;
            if(parityF==parityS){
                op++;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}