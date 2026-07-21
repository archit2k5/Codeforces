#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        unordered_set<long long> checker;

        bool flag=false;
        for(int i=0; i<n; i++){
            long long elem= arr[i];
            if(checker.find(elem) != checker.end()){
                flag=true;
                break;
            }
            checker.insert(elem);
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}