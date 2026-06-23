#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int xorSum=0;

        for(int i=0; i<n; i++){
            cin>>arr[i];
            xorSum^=arr[i];
        }
        if(n%2!=0 || xorSum==0){
            cout<<xorSum<<endl;
        }
        else cout<<-1<<endl;

    }
    return 0;
}