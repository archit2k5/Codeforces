#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
            continue;
        }
        else{
            int minDivisor=n;
            for(int i=2; i*i<=n; i++){
                if(n%i==0){
                    minDivisor=i;
                    break;
                }
            }
            cout<<n/minDivisor<<" "<<n-(n/minDivisor)<<endl;
        }
    }
    return 0;
}