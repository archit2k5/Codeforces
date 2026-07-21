#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    bool flag=true;

    for(int i=0; i<str.size()-1; i++){
        if(str[i]>str[i+1]){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
    }

    return 0;
}