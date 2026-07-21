#include<iostream>

using namespace std;

long long xorFinder(long long n){
    int a=n%4;
    
    if(a==0){
        return n;
    }
    else if(a==1){
        return 1;
    }
    else if(a==2){
        return n+1;
    }
    else{
        return 0;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        
        long long count=0;

        long long xorSum=xorFinder(a-1);

        if(xorSum==b){
            count=a;
        }
        else if((xorSum ^ b) != a){
            count=a+1;
        }
        else{
            count=a+2;
        }
        
        cout<<count<<endl;
    }
    return 0;
}