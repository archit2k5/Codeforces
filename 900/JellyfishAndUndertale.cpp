#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, n;
        cin>>a>>b>>n;
        vector<long long> tools(n);

        
        for(int i=0; i<n; i++){
            cin>>tools[i];
        }
        
        long long time=b;

        for(int i=0; i<n; i++){
            if(1+tools[i]>=a){
                time+=a-1;
            }
            else{
                time+=tools[i];
            }
        }
        
        cout<<time<<endl;
    }
    return 0;
}
