#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0; i<n; i++){
            cin>>arr[i];
        }

        unordered_map<long long, long long> freq;
        for(long long i=0; i<n; i++){
            freq[arr[i]]++;
        }

        long long maxFreq= 0;
        for(const auto& x : freq){
            maxFreq=max(maxFreq, x.second);
        }

        long long op=0;
        while(maxFreq < n){
            op++;
            if(maxFreq*2 <=n){
                op+=maxFreq;
                maxFreq*=2;
            }
            else{
                op+=n-maxFreq;
                maxFreq=n;
            }
        }

        cout<<op<<endl;
    }
    return 0;
}