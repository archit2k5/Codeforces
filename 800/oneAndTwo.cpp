#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count2=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==2){
                count2++;
            }
        }

        if(count2==0){
            cout<<1<<endl;
        }
        else if(count2%2!=0){
            cout<<-1<<endl;
        }
        else{
            int count=0;
            for(int i=0; i<n; i++){
                if(arr[i]==2){
                    count++;
                }
                if(count2/2==count){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}