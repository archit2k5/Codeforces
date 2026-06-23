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

        int arr[26]={0};


        for(int i=1; i<len; i++){

            

            int index=str[i-1]-'a';
            if(arr[index]==0 && index<i){
                arr[index]=1;
                s1++;
            }
            if(arr[index]!=2 && index>=i){
                arr[index]=2;
                s2++;
            }

            maxi=max(maxi,total);
        }
        
        cout<<maxi<<'\n';
    }


    return 0;
}