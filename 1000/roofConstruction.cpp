#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int max=1;

        while((max<<1) < n){
            max<<=1;
        }

        vector<int> ans;
        for(int i=max-1; i>=0; i--){
            ans.push_back(i);
        }
        for(int i=max; i<n; i++){
            ans.push_back(i);
        }

        for(const auto& x: ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}