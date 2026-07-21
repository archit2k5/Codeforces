#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r, b;
        cin>>n>>r>>b;

        string str;
        int freq= ((r)/(b+1));
        int remainder= r-(freq*(b+1));
        while(b>0){

            for(int i=0; i<freq; i++){
                str+='R';
                r--;
            }
            if(remainder>0){
                str+='R';
                remainder--;
                r--;
            }   
            str+='B';
            b--;
        }

        while(r>0){
            str+='R';
            r--;
        }

        cout<<str<<endl;
    }
    return 0;
}