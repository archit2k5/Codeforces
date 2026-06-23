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

        int max_diff=0;

        for(int i=n-2; i>=0; i--){
            max_diff=max(max_diff, arr[n-1]-arr[i]);
        }

        for(int i=n-2; i>=0; i--){
            max_diff=max(max_diff, arr[i]-arr[i+1]);
            max_diff=max(max_diff, arr[i]-arr[0]);
        }

        cout<<max_diff<<endl;
    }
    return 0;
}