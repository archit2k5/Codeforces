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

        int count1=k, count2=0;
        for(int i=0; i<n; i++){
            if(str[i]=='1'){
                count1=0;
                
            }
            else if(str[i]=='0' && count1<k){
                count1++;
            }
            else if(str[i]=='0'){
                count2=count2+1;
            }
            
        }
        cout<<count2<<endl;
    }

    return 0;
}