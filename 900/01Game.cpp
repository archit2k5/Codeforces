#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        int count0=0;
        int count1=0;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='0'){
                count0++;
            }
            else{
                count1++;
            }
        }

        int pair=min(count0, count1);

        if(pair%2==0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }
    return 0;
}