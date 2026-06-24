#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n*k];
        for(int i=0; i<n*k; i++){
            cin>>arr[i];
        }

        long long sum=0;
        int median= (n+1)/2;
        int skip= n-median;

        int i=n*k-1;

        while(k--){

            i=i-skip;
            sum+=arr[i];
            i--;
        }

        cout<<sum<<endl;
    }
    return 0;
}