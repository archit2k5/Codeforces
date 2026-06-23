#include<iostream>
#include<vector>

using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, k;
        cin>>x>>k;

        int i=x;
        vector<int> ans;
        while(i>0){
            if(i%k==0){
                i--;
            }
            else if((x-i)>=0){
                x=x-i;
                ans.push_back(i);
            }
            else i--;
        }
        cout<<ans.size()<<endl;
        for(auto &x: ans){
            cout<<x<<" ";
        }
        cout<<endl;

    }
    return 0;
}