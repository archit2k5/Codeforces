#include<iostream>
#include<string>

using namespace std;


int main(){
    int n;
    cin>>n;
    int count[2]={0};
    string s1="", s2="";
    while(n--){
        string str;
        cin>>str;
        if(s1==""){
            s1=str;
        }
        else if(s1!=""){
            if(s1!=str){
                s2=str;
            }
        }
        if(str==s1){
            count[0]++;
        }
        else if(str==s2){
            count[1]++;
        }
    }
    if(count[0]>count[1]){
        cout<<s1;
    }
    else{
        cout<<s2;
    }

    return 0;

}