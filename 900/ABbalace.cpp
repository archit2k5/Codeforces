#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        int len=str.size();
        if(str[0]!=str[len-1]){
            str[0]=str[len-1];
        }

        cout<<str<<endl;
    }
    return 0;
}