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

        int len=str.length();

        int s1=0, s2=0;

        int dis[26]={0};
        for(char x: str){
            int index=x-'a';
            if(dis[index]==0){
                dis[index]=3;
                s1++;
            }
            else if(dis[index]!=0){
                break;
            }
        }


        for(int i=s1; i<len; i++){
            int index=str[i]-'a';
            if(dis[index]!=1){
                dis[index]=1;
                s2++;
            }
        }

        cout<<s1+s2<<'\n';
    }


    return 0;
}