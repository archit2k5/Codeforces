#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        int count0=0, count1=0;
        for(const auto& x: str){
            if(x=='1'){
                count1++;
            }
            else{
                count0++;
            }
        }

        if(count1==count0){
            cout<<0<<endl;
        }
        else{
            int i=0;
            while(count0>=0 && count1>=0){
                if(str[i]=='0'){
                    if(count1==0) break;
                    count1--;
                }
                else if(str[i]=='1'){
                    if(count0==0) break;
                    count0--;
                }
                i++;
            }
            cout<<count0+count1<<endl;

        }
    }
    return 0;
}