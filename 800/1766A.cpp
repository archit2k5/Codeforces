#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0, start=1;
        for(int i=1; i<=n; i++){
            int digit=i/start;
            if(digit==10){
                start=start*10;
                ans++;
            }
            else if(i%start==0){
                ans++;
            }
            else{
                i=i+start-2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}