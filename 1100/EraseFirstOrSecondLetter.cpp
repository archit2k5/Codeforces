#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<bool> seen(26, false);
        
        long long count=0;

        for(int i=0; i<n; i++){
            if(seen[str[i]-'a']){
                continue;
            }
            seen[str[i]-'a']=true;
            count+=n-i;
        }

        cout<<count<<endl;
    }
    return 0;
}