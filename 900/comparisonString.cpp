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
        
        char test=str[0];
        int count=1;
        int cost=1;

        for(const char &x: str){
            if(x!=test){
                cost=max(cost, count);
                count=2;
                test=x;
            }
            else if(x==test){
                count++;
            }
        }
        cost=max(count, cost);
        cout<<cost<<endl;
    }
    return 0;
}