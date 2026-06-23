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

        int i=0,count=0,total=0;
        int count1=0, count2=0, count3=0;
        while(i<n){
            while(i<n && str[i]!='#'){
                count++;
                i++;
            }
            if(count>=3){
                count3++;
                break;
            }
            else if(count==1){
                count1++;
            }
            else if(count==2){
                count2++;
            }
            count=0;
            i++;
        }
        total=1*count1+2*count2;
        if(count3==1) cout<<2<<endl;
        else cout<<total<<endl;
        
    }
    return 0;
}