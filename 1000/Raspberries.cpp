#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int remainder=0;

        bool flag= (k==4);
        int count=0;

        for(int i=0; i<n; i++){
            if(arr[i]%k==0){
                remainder=0;
                break;
            }
            if(flag){
                if(arr[i]%2==0){
                    count++;
                }
                if(count==2){
                    break;
                }
            }
            remainder=max(remainder, arr[i]%k);
        }

        if(remainder==0 || count==2){
            cout<<0<<endl;
        }
        else{
            if(flag){
                int max_op=min(2-count, k-remainder);
                cout<<max_op<<endl;
            }
            else cout<<k-remainder<<endl;
        }
    }
    return 0;
}