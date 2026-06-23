#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        long long a, b, c;
        cin>>a>>b>>c;

        bool ans=false;

        long long new_a=2*b-c;
        if(new_a>=a && new_a%a==0){
            ans=true;
        }

        long long new_b=(a+c)/2;
        if(new_b>=b && new_b%b==0 && (a+c)%2==0){
            ans=true;
        }
        
        long long new_c=2*b-a;
        if(new_c>=c && new_c%c==0){
            ans=true;
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}