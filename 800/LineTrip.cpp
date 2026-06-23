#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int gasStop[n+2];

        for(int i=1; i<n+1; i++){
            gasStop[i]=arr[i-1];
        }

        gasStop[0]=0;
        gasStop[n+1]=2*x-arr[n-1];

        int maxVol=1;

        for(int i=0; i<n+1; i++){
            int diff=gasStop[i+1]-gasStop[i];
            maxVol=max(maxVol,diff);
        }
        cout<<maxVol<<'\n';
    }
    return 0;
}