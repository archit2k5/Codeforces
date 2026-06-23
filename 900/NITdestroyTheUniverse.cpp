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

        int countZero=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                countZero++;
            }
        }

        bool zeroSeg=false;
        int i=0;
        int j=n-1;
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==0){
            j--;
        }
        
        for(int k=i; k<=j; k++){
            if(arr[k]==0){
                zeroSeg=true;
                break;
            }
        }

        if(countZero==n){
            cout<<0<<endl;
        }
        else if(!zeroSeg){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }

    return 0;
}