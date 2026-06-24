#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, x;
        cin>>n>>x;
        long long arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long long sum=0;
        long long beauty=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            beauty+=(arr[i]+(x-1))/x; //round up
        }

        cout<<(sum+(x-1))/x<<" ";
        cout<<beauty<<endl;
    }
    return 0;
}