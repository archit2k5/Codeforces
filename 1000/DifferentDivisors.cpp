#include<iostream>
#include<vector>

using namespace std;

vector<int> generatePrime(){
    vector<int> prime;
    for(int i=2; i<=100000; i++){
        bool isPrime=true;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            prime.push_back(i);
        }
    }
    return prime;
}


int main(){
    int t;
    cin>>t;
    vector<int> prime=generatePrime();
    while(t--){
        int d;
        cin>>d;


        int p=-1;
        for(int i=0; i<prime.size(); i++){
            if(prime[i]>=(1+d)){
                p=prime[i];
                break;
            }
        }

        int q=-1;
        for(int i=0; i<prime.size(); i++){
            if(prime[i]>=(p+d)){
                q=prime[i];
                break;
            }
        }

        long long ans= min(1LL*p*p*p, 1LL*p*q);
        cout<<ans<<endl;
    }
    return 0;
}