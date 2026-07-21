#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        int count=0;
        for(const auto& x: str){
            if(x=='('){
                count++;
            }
            else if(x==')' && count>0){
                count--;
            }
        }
        cout<<count<<endl;
    }
}