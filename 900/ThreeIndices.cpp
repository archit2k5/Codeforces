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

        int index=-1;

        for(int i=1; i<n-1; i++){
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                index=i;
                break;
            }
        }

        if(index==-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<index<<" "<<index+1<<" "<<index+2<<endl;
        }
    }
    return 0;
}