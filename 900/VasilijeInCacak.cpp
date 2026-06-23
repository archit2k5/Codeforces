#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k, x;
        cin>>n>>k>>x;
        
        long long smallest_sum=(k*(1+k))/2;
        long long largest_sum=(((n-k+1)+n)*k)/2;

        if(x<=largest_sum && x>=smallest_sum){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}