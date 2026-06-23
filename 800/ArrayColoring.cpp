#include<iostream>

using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int oddCount=0;
        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2==1){
                oddCount++;
            }
        }

        if(oddCount%2==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;


    }
    return 0;
}