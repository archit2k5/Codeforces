#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];

        for(int i=0; i<n; i++){
            cin>>s[i];
        }

        bool flag=false;
        vector<int> ans;
        for(int i=1; i<=n; i++){
            ans.push_back(i);
        }
        int i=0, j=0;
        while(i<n){
            while(s[i]==s[j] && j<n){
                j++;
            }
            if(j-i==1){
                flag=true;
                break;
            }

            int first=ans[i];
            for(int k=i; k<j-1; k++){
                ans[k]=ans[k+1];
            }
            ans[j-1]=first;
            i=j;
        }

        if(flag){
            cout<<-1<<endl;
        }
        else{
            for(const auto& x: ans){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}