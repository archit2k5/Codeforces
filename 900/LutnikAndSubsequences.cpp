#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        long long count1=0;
        long long count0=0;
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                count1++;
            }
            else if(arr[i]==0){
                count0++;
            }
        }

        long long zeroEffect=(1LL<<count0);
        long long ans=count1*zeroEffect;

        cout<<ans<<endl;

    }
    return 0;
}