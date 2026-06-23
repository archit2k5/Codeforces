#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int countN1=0, countP1=0, op=0;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==1){
                countP1++;
            }
            else if(arr[i]==-1){
                countN1++;
            }
        }

        if(countN1<=countP1){
            if(countN1%2!=0){
                op++;
            }
        }
        else if(countN1>countP1){
            while(countN1>countP1){
                op++;
                countN1--;
                countP1++;
            }
            if(countN1%2!=0){
                op++;
            }
        }
        cout<<op<<endl;

    }
    return 0;
}