#include<iostream>

using namespace std;

int main(){
    int n;
    int k;
    cin>> n >> k;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            count++;
        }
        else if(arr[i]<arr[k-1]){
            break;
        }
    }
    cout<<count;
    return 0;
}