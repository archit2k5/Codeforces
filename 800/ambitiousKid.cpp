#include<iostream>

using namespace std; 

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mini=abs(arr[0]);
    for(int i=1; i<n; i++){
        if(abs(arr[i])<mini){
            mini=min(abs(arr[i]), mini);
        }
    }

    cout<<mini<<endl;
    return 0;
}