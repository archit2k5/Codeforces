#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;

        unordered_set<char> bucket;

        for(const auto &ch: str){
            if(bucket.count(ch)){
                bucket.erase(ch);
            }
            else{
                bucket.insert(ch);
            }
        }

        int count=bucket.size();

        if(count>k+1){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}