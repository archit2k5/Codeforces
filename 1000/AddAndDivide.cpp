#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        if(b>a){
            cout<<1<<endl;
        }
        else{
            long long mini= INT_MAX;
            for(int i=0; i<35; i++){
                    long long new_b=b+i;
                if(new_b==1){
                    continue;
                }
                long long op=i;
                long long copy_a=a;
                while(copy_a>0){
                    copy_a/=new_b;
                    op++;
                }
                mini=min(mini, op);
            }
            cout<<mini<<endl;
        }
    }
        return 0;
}