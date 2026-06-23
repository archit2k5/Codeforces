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

        int minGap=INT_MAX;
        for(int i=1; i<n; i++){
            minGap=min(minGap, arr[i]-arr[i-1]);
        }
        if(minGap<0){
            cout<<0<<endl;
        }
        else if(minGap==0){
            cout<<1<<endl;
        }
        else{
            cout<<(minGap/2)+1<<endl;
        }

    }
    return 0;
}