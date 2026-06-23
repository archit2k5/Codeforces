#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        int i=0, j=str.length()-1;
        int count=0;
        while(i<j){
            if(str[i]==str[j]){
                break;
            }
            count++;
            i++;
            j--;
        }

        cout<<str.length()-(count*2)<<endl;
    }
    return 0;
}