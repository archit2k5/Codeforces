#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
    
        string str;
        cin>>str;
    
        int white=0;
        int mini=INT_MAX;
    
        for(int i=0; i<k; i++){
            if(str[i]=='W'){
                white++;
            }
        }
    
        mini=min(white,mini);
    
        for(int i=1; i<=n-k; i++){
            if(str[i-1]=='W'){
                white--;
            }
            if(str[i+k-1]=='W'){
                white++;
            }
            mini=min(mini, white);
        }
        cout<<mini<<endl;

    }

    return 0;
}