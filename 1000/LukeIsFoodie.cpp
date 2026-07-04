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

        int l=arr[0]-x, r=arr[0]+x;
        int count=0;
        for(int i=1; i<n; i++){
            int y=arr[i]-x;
            int z=arr[i]+x;
            if(r>=y && l<=z){
                l=max(y,l);
                r=min(r,z);
            }
            else{
                l=y;
                r=z;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}