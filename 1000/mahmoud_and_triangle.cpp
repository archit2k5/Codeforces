#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    for(int i=0; i<n-2; i++){
        int j=i+1;
        int k=i+2;
        if(arr[i]+arr[j]>arr[k]){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}