#include <iostream>

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
        
        int i=1;

        while(i<n-1){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
                i=1;
            }
            else i++;
        }
        
        bool ascending=true;
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                ascending=false;
            }
        }
        if(ascending) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}