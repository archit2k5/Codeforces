#include<iostream>
#include<map>

using namespace std;

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

        map<int,int> m1;
        bool three=false;
        for(int i=0; i<n; i++){
            if(m1.size()<2 || m1[arr[i]]){
                m1[arr[i]]++;
            }
            else{
                three=true;
                break;
            }
        }
        int freq1=0, freq2=0;
        for(auto& x: m1){
            if(freq1==0){
                freq1=x.second;
            }
            else{
                freq2=x.second;
            }
        }

        if(!three && (m1.size()==1 || abs(freq1-freq2)<2)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}