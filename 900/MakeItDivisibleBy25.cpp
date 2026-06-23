#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        int n=str.size();
        int min_operation=INT_MAX;
        int count=0;
        bool flag=false;
        
        //operations required to get 0 at end
        for(int i=n-1; i>=0; i--){
            if(flag && (str[i]=='0' || str[i]=='5')){
                min_operation=min(count, min_operation);
                break;
            }
            else if(!flag && str[i]=='0'){
                flag=true;
                continue;
            }
            else{
                count++;
            }
        }

        //operations required if last digit is to be 5
        flag=false;
        count=0;
        for(int i=n-1; i>=0; i--){
            if(flag && (str[i]=='2' || str[i]=='7')){
                min_operation=min(count, min_operation);
                break;
            }
            else if(!flag && str[i]=='5'){
                flag=true;
                continue;
            }
            else{
                count++;
            }
        }

        cout<<min_operation<<endl;

    }

    return 0;
}