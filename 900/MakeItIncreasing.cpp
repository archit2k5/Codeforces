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


        int op=0;
        bool flag=false;

        for(int i=n-1; i>0; i--){
            if(arr[i]==0){
                op=-1;
                break;
            }

            if(arr[i-1]>=arr[i]){
                while(arr[i-1]>=arr[i]){
                    arr[i-1]=arr[i-1]/2;
                    op++;
                }
            }
        }

        cout<<op<<endl;
    }
}
