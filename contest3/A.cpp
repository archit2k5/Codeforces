#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;

        long long num=0;
        int count=0;
        while(k* ((num<<1LL ) | 1) <= n){
            num=((num<<1LL) | 1);
            count++;
        }

        long long total=count*k;
        long long remainder=n-num*k;
        total+=remainder>>count;
        cout<<total<<endl;
        
        
    }
    return 0;
}
