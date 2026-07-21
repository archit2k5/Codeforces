#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;

        if((n^k)>=n){
            cout<<"NO"<<endl;
            continue;
        }

        vector<long long> ans;

        long long calcXor = (n^k);
        long long a = min(calcXor, n);
        long long b = max(calcXor, n);

        for(int i=1; i<a; i++){
            ans.push_back(i);
        }

        for(int i=a+1; i<b; i++){
            ans.push_back(i);
        }

        ans.push_back(0);
        if(a!=0)
            ans.push_back(a);
        
        cout<<"Yes"<<endl;
        for(const auto& x: ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}