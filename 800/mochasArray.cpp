#include<iostream>

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int remainder=a%b;
        a=b;
        b=remainder;
    }
    return a;
}

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

        int minGcd=INT_MAX;
        
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                minGcd=min(gcd(arr[i],arr[j]), minGcd);
            }
        }


        if(minGcd<=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}