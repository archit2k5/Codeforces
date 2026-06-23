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

        int maxSpan=0, span=0;
        for(int i=0; i<n; i++){
            span=0;
            while(i<n && arr[i]==1){
                i++;
            }
            while(i<n && arr[i]==0){
                span++;
                i++;
            }
            maxSpan=max(span, maxSpan);
        }
        cout<<maxSpan<<endl;
    }

    return 0;
}