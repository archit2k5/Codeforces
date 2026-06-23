#include<iostream>
#include<string>

using namespace std;

int main(){
    string  str;
    cin>>str;

    int arr[26];
    for(int i=0; i<26; i++){
        arr[i]=0;
    }
    for(char x: str){
        int i=x-'a';
        if(arr[i]==0){
            arr[i]=1;
        }
    }

    int count=0;

    for(int i=0; i<26; i++){
        if(arr[i]==1){
            count++;
        }
    }
    if(count%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}