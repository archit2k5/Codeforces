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
        int arr2[2*n];
        arr2[0]=arr[0];
        int size=1;
        for(int i=1; i<n; i++){
            if(arr[i-1]>arr[i]){
                arr2[size++]=arr[i];
                arr2[size++]=arr[i];
            }else arr2[size++]=arr[i];
        }

        cout<<size<<endl;
        for(int i=0; i<size; i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}