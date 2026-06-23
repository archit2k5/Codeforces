#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        char s;
        cin>>s;
        string str;

        cin>>str;
        int maxi=0;

        int i=0, j=0;
        while(i!=n){
            if(str[i]!=s){
                i++;
            }
            if(str[j%n]!='g'){
                j++;
            }
            if(j<i){
                j++;
            }
            if(str[i]==s &&str[j%n]=='g'){
                maxi=max(maxi, j-i);
                i++;
            }
        }
        cout<<maxi<<endl;
        
    }
}
